#include <iostream>
using namespace std;


//Recursive Function
void StringCopy(char str[],char copy[],int i=0)
{
   copy[i]=str[i];
   if(str[i]=='\0')
   return ;
   StringCopy(str,copy,i+1);
}

void  stringCopy(char str[],char copy[])
{
  int i=0;
  for(i=0;str[i]!='\0';i++)
   copy[i]=str[i];
  copy[i]='\0';

}
int main() {
  char str[]="riyaz";
  char copy[10];
  stringCopy(str,copy);
  StringCopy(str,copy);
  cout<<copy;

  cout<<copy;
  return 0;
}