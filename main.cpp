#include<iostream>
using namespace std;
bool allCharactersSame(string str)
{
  for(i=0;i<n;i++)
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