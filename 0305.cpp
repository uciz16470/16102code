#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("%d,%d,%d\n",n[0],n[1],n[2]);

    int *p1 = &n[0];
    *p1 = 85;
    printf("%d,%d,%d\n",n[0],n[1],n[2]);

    int *p2 = &n[2];
    *p2 = 520;
    printf("%d,%d,%d\n",n[0],n[1],n[2]);

    p2 = p1;
    *p2 = 87;
    printf("%d,%d,%d\n",n[0],n[1],n[2]);
}
