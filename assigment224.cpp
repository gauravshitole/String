/*input:7
output:True

input:d
output:False;

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkDigit(char ch)
{
  
         while(ch != '\0')
       if((ch<=97) && (ch<=112))
        {
            break;
        }
        
      if((ch >= 65) && (ch <= 90))
        {
            return FALSE;
        }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the charactor\n");
    scanf("%c",&cValue);

    bRet= ChkDigit(cValue);


    if(bRet==FALSE)
    {
        printf("It is Small not Case Charactor");

    }
    else
    {
        printf("It is Small Case Charactor\n");
    }
    return 0;
}
