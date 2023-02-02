#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter number:";
    cin>>i;
    int count=0;
    while(i!= 0) {
      i=i/10;
      count++;
   }
   cout<<"number of digits:"<<count;
  return 0;
}
