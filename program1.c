 #include<stdio.h>
 void StrCpyX(char *src,char *dest)
 {
while(*src!='\0')
{
    *dest=*src;
    src++;
    dest++;

}
src++;
 }
 int main()
 {
    char arr[30]="Marvellous Multi Os";
    char brr[30];
    StrCpyX(arr,brr);

    printf("%s",brr);


    return 0;
 }