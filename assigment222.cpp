/*input:F
output:True

input:d
output:False;

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkCaptil(char ch)
{
 while(ch != '\0')
    {
        if((ch >= 97) && (ch <= 122))
        {
            return TRUE;
        }
        return FALSE;
}
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the charactor\n");
    scanf("%c",&cValue);

    bRet=ChkCaptil(cValue);


    if(bRet==TRUE)
    {
        printf("It is Chaptal Charactor\n");

    }
    else
    {
        printf("It is not capital Charactor\n");
    }
    return 0;
}
