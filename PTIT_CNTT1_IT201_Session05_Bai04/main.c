#include <stdio.h>
int tong(int a,int b)
{
    if(a>b) return 0;
    return a + tong(a +1,b);
}

int main(void)
{
    int so1,so2;
    do
    {
        printf("nhap so thu 1:");
        scanf("%d",&so1);
        printf("nhap so thu 2 :");
        scanf("%d",&so2);
        if (so1<=0 || so2<=0 || so1==so2)
        {
        printf(" khong hop le\n");
        } else if (so1>so2)
        {
            printf(" so thu 1 nho hon so thu 2\n");
        }

    } while (so1<=0 || so2<=0 || so1==so2);
int tongkhoang=tong(so1,so2);
    printf(" tong trong khoang tu %d - %d = %d",so1,so2,tongkhoang);
    printf("\n");
    return 0;
}