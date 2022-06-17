   #include<iostream>
using namespace std;

int Special(char str[])
{


    while(*str != '\0')
    {
        if((*str == '!') || (*str == '@')  || (*str == '#') || (*str == '$') || (*str == '%')||(*str == '^')||(*str == '&')||(*str == '*'))
        {
           return true;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];
    bool bRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    bRet = Special(Arr);
  if(bRet==true)
  {
      printf("It is special charactor\n");
  }
  else
  {
      printf("It is not special charactor\n");
  }

    return 0;
}
