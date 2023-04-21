# include <stdio.h>

int main()
{
    char str[10]="khushi";
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]-32);
        i++;
    }
    return 0;
}
