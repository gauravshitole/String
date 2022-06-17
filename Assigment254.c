#include<stdio.h>
void CountX(char *str)
{
int iDigit=0;
while(*str!='\0')
{ 
 if((*str>=0)&&(*str<=9))
 {
iDigit++;
 } 
 str++;
}
}

 int main()
 {
  char Arr[20];
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
int iRet=0;

  CountX(Arr);

 printf("%c\n",Arr);

  return 0;
 }