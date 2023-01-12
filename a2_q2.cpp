#include<iostream>
using namespace std;
int main(int argc,char**argv)
{
    int marks;
    cin>>marks;

    // write your code here
    cout<<"Marks of the student"<<endl;
    if(marks>90)
    {
        cout<<"excellent"<<endl;
    }
    else
    {
        if(marks>80)
        {
            cout<<"good"<<endl;
        }
        else
        {
            if(marks>70)
            {
                cout<<"fair"<<endl;
            }
            else
            {
                if(marks>60)
                {
                    cout<<"meet exceptations"<<endl;
                }
                else
                {
                    cout<<"below par"<<endl;
                }
            }
        }
    }

    return 0;
}
