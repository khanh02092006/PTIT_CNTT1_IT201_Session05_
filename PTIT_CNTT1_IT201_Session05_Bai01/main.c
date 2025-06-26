#include <stdio.h>
void inso(int n)
{
    if(n==0) return;
    inso((n-1));
    printf("%d\n", n);

}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so nguyen duong");
        scanf("%d", &n);
        if (n<0)
        {
            printf(" khong hop le\n");

        }
    } while (n<=0);
    inso(n);
    printf("\n");

    return 0;
}