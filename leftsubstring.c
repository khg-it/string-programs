# include <stdio.h>

int main()
{
    char str[30]="khushi";
    int pos;
    printf("\n enter position: ");
    scanf("%d",&pos);//3
    printf("\n string before extracting is:%s",str);
    int i=0;
    while(i<pos)
    {
        printf("\n %c",str[i]);
        i++;
    }
    return 0;

}
