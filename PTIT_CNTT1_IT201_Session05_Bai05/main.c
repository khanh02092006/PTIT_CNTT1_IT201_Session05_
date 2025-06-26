#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int doixung(char *str,int left,int right)
{
    if (str[left]>=str[right]) return 1;
    if (str[left]!=str[right]) return 0;
    return doixung(str,left+1,right-1);
}
int main(void)
{
    int size=1000;
    char *chuoi=(char *)malloc(size*sizeof(char));
    if(chuoi==NULL)
    {
        printf(" chua cap phat ");
        return 1;
    }
    printf(" nhap chuoi bat ky");
    fgets(chuoi,size,stdin);
    chuoi[strcspn(chuoi ,"\n")]=0;
    int len =strlen(chuoi);
int chuoidaonguoc=doixung(chuoi,0,len-1);
    if (chuoidaonguoc==1)
    {
        printf(" day la mang doi xung");
    } else
    {
        printf(" khong phai mang doi xung");
    }
    free(chuoi);
    return 0;
}
