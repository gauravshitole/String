 #include<stdio.h>

void StrCopyX(char *src,char *dest,int iCnt)
{
    while((*src!='\0')&&(iCnt!=0))
    {
        *dest=*src;
        src++;
        dest++;

    iCnt--;
    }
   *dest ='\0';
}
 int main()
 {
char arr[30]="Marvellous Multi Os";
char brr[30];
StrCopyX(arr,brr,10);
printf("%s",brr);
return 0;
 }