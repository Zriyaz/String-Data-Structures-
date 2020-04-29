#include<iostream>
using namespace std;
bool allCharactersSame(string str)
{
  for(int i=0;i<str.length();i++)
  {
    if(str[i]!=str[0])
    return false;
  }
  return true;
}
int main() 
{ 
    string s = "aaa"; 
    if (allCharactersSame(s)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 