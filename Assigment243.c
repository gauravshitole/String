#include<stdio.h>
 
int Diffrence(char *str)
{
     int iCnt=0;
    int iCnt1=0;
    int iAns=0;
    while(*str!='\0')
    {
    if((*str>='A')&&(*str<='Z'))
    {
        iCnt++;
    }
   else  if((*str>='a')&&(*str<='a'))
    {
        iCnt1++;
    }
     iAns=iCnt-iCnt1;
    str++;
    }
    return iAns;
}
 int main()
 {

char arr[20];
int iRet=0;


printf("Enter String\n");
scanf("%[^'\n]s",arr);

iRet=Diffrence(arr);

printf("%d",iRet);
     return 0;
 }