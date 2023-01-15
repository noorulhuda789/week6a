#include<iostream>
using namespace std;
int iugreater(int a,int b,int c);
main()
{
   int num1,num2,num3;
   cout<<"enter number";
   cin>>num1;
   cout<<"enter number";
   cin>>num2;
   cout<<"enter number";
   cin>>num3;
   int d = iugreater(num1,num2,num3); 
   cout<<d;
}
int iugreater(int a,int b,int c)
{
    if(a>b &&)
     {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
     }
     else
     {
        if(b>c)
        {
            return b;
        }
        else
        {
            {
                return c;
            }
        }
     }
     return 0;
}