#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int chuyendoithanhso(char *str ,int len,int * check)
{
    if (len==0) return 0;
    int lastchar=str[len-1];
    if (lastchar <'0' || lastchar>'9')
    {
        *check=0;
        return 0;
    }
    int sodachuyen = lastchar-'0';
    return chuyendoithanhso(str,len-1,check ) *10 + sodachuyen ;

}
int main(void)
{
    int size=100;
    char *input = (char *)malloc(size*sizeof(char));
    if(input == NULL)
    {
        printf(" chua cap phat");
        return 1;
    }
    printf(" nhap 1 chuoi bat ki\n");
    fgets(input,size,stdin);
    input[strcspn(input,"\n")]='\0';
     int check =1;
    int len =strlen(input);
int chuyendoichuoithanhso=chuyendoithanhso(input,len,&check);
    if (!check || len ==0)
    {
        printf(" chua duoc chuyen doi chuoi và input khong hop le");
    } else
    {
        printf(" da chuyen doi chuoi ket qua la:%d",chuyendoichuoithanhso);
    }
    return 0;
}
