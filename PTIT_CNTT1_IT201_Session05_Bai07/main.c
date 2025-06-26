#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n<=1) return n;
    return fibonacci((n-1)) + fibonacci((n-2));

}
int main(void)
{
    int n;
    do
    {
        printf(" nhap 1 so nguyen duong");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" khong hop le");

        }
    } while (n<=0);
    int *fibonaccarr = (int *)malloc((n)*sizeof(int));
    if (fibonaccarr == NULL)
    {
        printf(" chua duoc cap phat ");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        fibonaccarr[i] = fibonacci((i));

    }
    printf("%d so fanbonnacci dau tien là\n",n);
    for (int i = 0; i < n; i++)
    {
        printf(" %d", fibonaccarr[i]);
        if (i<n-1) printf(" ,");
    }
    free(fibonaccarr);
    return 0;
}