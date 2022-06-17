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
    {
        if((ch >= 97) && (ch <= 122))
        {
            return FALSE;
        }
        return TRUE;
}
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the charactor\n");
    scanf("%c",&cValue);

    bRet= ChkDigit(cValue);


    if(bRet==TRUE)
    {
        printf("It is Digits\n");

    }
    else
    {
        printf("It is not Digit\n");
    }
    return 0;
}
