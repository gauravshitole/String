#include<stdio.h>
#include<stdbool.h>
 
bool ChkVowel(char *str)
{
    int iCnt=0;
while(*str!='\0')
{
    if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
    {
    return true;
    }
     str++;
}
}
int main()
{
char arr[20];
bool bRet;

printf("Enter String\n");
scanf("%[^'\n]s",arr);

bRet=ChkVowel(arr);
if(bRet==true)
{
    printf("Contains Vowel\n");

}
else
{
    printf("There is no Vowel\n");
}

    return 0;
}