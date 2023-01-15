#include<iostream>
using namespace std;
main()
{
    int x,y,h;
    cout<<"enter  value of h :";
    cin>>h;
    cout<<"enter value of x coordinate :";
    cin>>x;
    cout<<"enter value of y coordinate  :";
    cin>>y;
    int x1=0;
    int y1=0;
    int x2=h*3;
    int y2=h;
    int y3=y2+h;
    int y4=y3*4;
    int y5=(y4*h)*4;
   
    if(x>=x1 && x<x2 ) 
    {
        if((y>y1 && y<y2) && (y>y3 && y<y4))
        {
            cout<<"inside";
        }
    }

    
    else if((x==x1 || x==x2  || x==h+h ||x==h*3)&&( y==y1 || y==y2 ||y==y3||y==y3+h||y==x*2 ||y==x3*3 ||y==x4*2 ||y==x4*3  ))
    {
        cout<<"border";
    }
    else
    {
       cout<<"outside";
    }

}