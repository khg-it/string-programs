# include <stdio.h>
# include <string.h>

int main()
{
    char str[10]="khushi";
    char temp;
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
   // printf("\n %d",strlen(str));

    printf("\n length of string str is %d",len);
    int j;
    for(j=0;j<=(len-1)/2;j++)
    {
        temp=str[j];
        str[j]=str[len-1-j];
        str[len-1-j]=temp;
    }
    printf("\n reverse of string  is:%s",str);
    return 0;
}
