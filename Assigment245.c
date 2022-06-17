 #include<stdio.h>
void revers(char *str)
{
    char *start=str;
    char *end=str;
    char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;
    
    while(start <= end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
 str++;
    end--;
    }
   
}
 int main()
 {
char Arr[20];
int iRet=0;

printf("Enter String\n");
scanf("%[^'\n']S",Arr);

revers(Arr);
 printf("\nString Reverse: %s");
    return 0;

 }