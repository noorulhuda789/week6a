#include<iostream>
using namespace std;
main()
{
    int stay;
    string month;
    cout<<"enter  your stay period  ";
    cin>>stay;
    cout<<"enter month you staythere  ";
    cin>>month;
    if(month=="may"  ||month=="october")
    {
        if(stay<=7)
        {
           float rent1=50*stay;
           float rent2=65*stay;
           cout<<rent1;
           cout<<rent2;  
        }
        if(stay>7 &&stay<14)
        {
           float rent1 =50*stay;
           float dis=rent1*0.05;
           float total=rent1-dis;
           float rent2=65*stay;
           cout<<total <<endl; 
           cout<<rent2;
            
        }
        if(stay>14)
        
        {float rent1 =50*stay;
           float dis1=rent1*0.3;
           float total1=rent1-dis1;
        float rent2=65*stay;
        float dis2=rent2*0.10;
           float total2=rent2-dis2;
           cout<<total1 <<endl;; 
           cout<<total2;
        }
    }
    if(month=="june" || month=="september")
    {
        if(stay>=1 &&stay<=14)
        {
           float rent1=75.20*stay;
           float rent2=68.70*stay;
           cout<<rent1; 
           cout<<rent2; 
        }
        
        if(stay>14)

           {
           float rent1 =75.20*stay;
           float dis1=rent1*0.2;
           float total1=rent1-dis1;
        float rent2=68.70*stay;
        float dis2=rent2*0.10;
           float total2=rent2-dis2;
           cout<<total1 <<endl;; 
           cout<<total2;
     
        }
    }
    if(month=="july" || month=="august")
    {
       if(stay>=1 && stay<=14)
        {
           float rent1=76*stay;
           float rent2=77*stay;
           cout<<rent1; 
           cout<<rent2; 
        }
        if(stay>14)

           {
           float rent1 =76*stay;
        float rent2=77*stay;
        float dis2=rent2*0.10;
           float total2=rent2-dis2;
           cout<<rent1 <<endl;; 
           cout<<total2;
     
        }
    }
}