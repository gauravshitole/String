/*input:F
output:True

input:&
output:False;

*/

#include<stdio.h>

#define TRUE 1
#define False 0
typedef int BOOL;


BOOL ChkAlpha(char ch)
{
 while(ch != '\0')
    {
        if((ch >= 65) && (ch <= 90))
        {
            return TRUE;
        }
        return False;
    }
    
}

int main()
{
    char cValue='\0';
    BOOL bRet;

    printf("Enter the charactor\n");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);


    if(bRet==TRUE)
    {
        printf("It is Charactor\n");

    }
    else
    {
        printf("It is not Charactor\n");
    }
return 0;
}
