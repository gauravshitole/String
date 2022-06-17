#include<stdio.h>

void Display(char ch)
{
    printf("Desimal  %d\n",ch);
    printf("octal %o\n",ch);
     printf("Hexadesimal %x\n",ch);
}
int main()
{
    char cValue='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}