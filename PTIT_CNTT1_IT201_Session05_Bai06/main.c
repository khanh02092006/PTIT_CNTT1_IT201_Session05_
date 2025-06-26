#include <stdio.h>
#include <stdlib.h>
int tongmang(int *arr ,int n)
{
    if (n==0) return 0;
    return arr[n-1]+ tongmang(arr,n-1);
}
int main(void)
{
int n;
    do
    {
        printf(" nhap so phan tu trong mang");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" khong hop le");

        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat ");
        return 1;

    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu %d:",i+1);
        scanf("%d", &arr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
        if (i< n-1) printf(" ,");
    }
int tốngtrongmang=tongmang(arr,n);
    printf(" tong so trong mang là %d",tốngtrongmang);
    free(arr);

    return 0;
}
