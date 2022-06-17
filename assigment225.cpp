/*input:C
output:Your Exam At 9.20AM

input:d
output:Your Exam At 10.30AM

*/

#include<stdio.h>
 


void DisplaySchedule(char chDiv)
{
  
        // while(chDiv != '\0')
       if((chDiv<='a') && (chDiv<='z'))
        {
        printf("Your Exam At 10.30AM\n");
        }
        
      else if((chDiv >='A') && (chDiv <='Z'))
        {
            printf("Your Exam At 9.20AM\n");
        }
}

int main()
{
    char cValue='\0';
    

    printf("Enter the charactor\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

 
    return 0;
}
