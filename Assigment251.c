 #include<stdio.h>
void struprX(char *str)
{
 while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
  
        str++;
    }
}
 int main()
 {
  char Arr[20];
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);


  struprX(Arr);

  printf("Modified String is: %s",Arr);

  return 0;
 }