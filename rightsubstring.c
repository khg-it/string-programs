# include <stdio.h>

int main()
{
    char str[10]="khushi",substr[10];
    char temp;//khushi =6
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }

    printf("\n %d",len);
    int pos;
    printf("\n enter pos: ");//pos=3;
    scanf("%d",&pos);
    int j=len-pos;
    int i=0;
    while(str[j]!='\0')
    {
        substr[i]=str[j];
        i++;
        j++;
    }
    substr[i]='\0';
    puts(substr);
    return 0;


}
