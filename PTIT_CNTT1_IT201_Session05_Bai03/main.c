#include <stdio.h>
int gt(int n)
{
    if (n==0) return 1;
    return n*gt(n-1);
}
int main(void)
{
    int n;
    do
    {
        printf(" nhap vao so nguyen suong");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" khong hop le");
        }
    } while (n<=0);
int gt1 = gt(n);
    printf("%d! = %d", n, gt1);
    printf("\n");
    return 0;
}