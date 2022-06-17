#include<stdio.h>
void StrCpyRev(char *str,char *dest)
{
     char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
  
    }
}

int main()
{
char arr[30]="Marvellos Python";
char brr[30];
StrCpyRev(arr,brr);
printf("%s",arr);

    return 0;
}