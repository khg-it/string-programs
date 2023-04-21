# include <stdio.h>

int main()
{
    char str1[30]="khushi";
    char str2[30]="Saraswat";
    int i=1;
    while(str1[i]!='\0')
    {
        i++;
    }
   int j=0;
   while(str2[j]!='\0')
   {
       str1[i]=str2[j];
       i++;
       j++;
   }
   printf("\n appended string is %s",str1);
   return 0;
}
