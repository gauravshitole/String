#include<stdio.h>

void Display(char ch)
{
    char iCnt='\0';
    if((ch>='A')&&(ch<='Z'))
    for(iCnt=ch;iCnt<='Z';iCnt++)
    {
        printf("%c",iCnt);
    }
  
    if((ch>='a')&&(ch<='z'))
    for(iCnt=ch;iCnt<='z';iCnt++)
    {
        printf("%c",iCnt);
}
}

int main()
{
char cValue='\0';

printf("Enter the charactor\n");
scanf("%c",&cValue);
Display(cValue);

    return 0;
}