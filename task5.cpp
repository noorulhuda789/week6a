#include<iostream>
using namespace std;
main()
{
    int row,column;
    cout<<"enter number of chairs in arow";
    cin>>row;
    cout<<"enter number of chairs n a column ";
    cin>>column;
    string screen;
    cout<<"enter your choice ";
    cin>>screen;
    
    float totalseats=row*column;
      
    if(screen=="premier")
    {
    
        float bill =totalseats*12;
        cout<<bill;
        
    }
       if(screen=="normal")
    {

        float bill =totalseats*7.50;
        cout<<bill;
        
    }
           if(screen=="discount")
    {

        float bill =totalseats*5;
        cout<<bill;
        
    }
    
    
    
}