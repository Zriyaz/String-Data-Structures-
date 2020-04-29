#include<iostream>
using namespace std;
bool check_duck(string num)
{
  int n=num.length();
  int i=0;
  while(i<n && num[i]=='0')
  i++;
  while(i<n){
  if(num[i]=='0'){
  return true;
  break;
  }
   i++;
  }
  return false;  
}
int main(void) 
{ 
    string num = "1123"; 
    if (check_duck(num)) 
        cout << "It is a duck number\n"; 
    else
        cout << "It is not a duck number\n"; 
  
    return 0; 
}