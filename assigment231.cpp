#include<stdio.h>
void DisplayASCII()
{
  int i;
for(i=0;i<=255;i++)
{
  printf("\n the Ascii value of %c is%d",i,i);
}
}

int main()
{
  DisplayASCII();
  return 0;
}