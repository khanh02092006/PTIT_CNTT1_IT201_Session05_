#include <stdio.h>
int tong(int n)
{
    if (n==1) return 1;
    return n+tong(n-1);
}
int main(void)
{
    int n;
    do
    {
        printf(" nhap 1 so nguyen ");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" khong hop le");
        }
    } while (n<=0);
 int sôtng= tong(n);
    printf("S(%d)=%d",n,sôtng);
    return 0;
}