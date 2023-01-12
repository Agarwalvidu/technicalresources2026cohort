#include<iostream>
using namespace std;
int main(int argc, char** agrc)
{
  //write your code here

    for(int row = 0;row < 5;row++)
    {
      for(int column = 0;column < 5;column++)
      {
        if (row == 0 || row == 4 || column == 4 - row)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }  
      }
        cout << endl;
    }
}
