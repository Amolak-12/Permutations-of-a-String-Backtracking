#include <iostream>
using namespace std;

void PrintPERMUTATION(string& str , int i)
{
  //Base Case
  if(i>=str.length())
  {
    cout << str << " ";
  }

  //Pick the element
  for(int j = i;j<str.length();j++)
  {
    // Sub Step 1 : Swap
    swap(str[i] , str[j]);
    //Sub Step 2 : Recursion
    PrintPERMUTATION(str , i+1);
    // Sub Step 3 : Backtracking
    swap(str[i] , str[j]);
  }
}

int main() {
  //Making string variable
  string str = "abcd";
  //Variable for index
  int i = 0;
  //Function Call
  PrintPERMUTATION(str,i);
  return 0;
}