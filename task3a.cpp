#include<iostream>
using namespace std;
main()
{
    int num1,num2,num3;
    cout<<"enter first  number";
    cin>>num1;
   cout<<"enter second  number";
    cin>>num2;
  cout<<"enter third  number";
    cin>>num3;
    if(num1==num2 &num3==num2 &&num1==num3)
    {
        cout<<"yes";
    }
    else
    {
        
        cout<<"no";
    }
}