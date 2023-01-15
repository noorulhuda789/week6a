#include<iostream>
using namespace std;
main()
{
    int minu;
    string time;
    char code;
    cout<<"enter your service code  prees r for regular p for premium  ";
    cin>>code;
    cout<<"enter  minutes you used ";
    cin>>minu;
    if(code!='r' && code!='p')
    {
        cout<<"invalid code  ";
    }
    if(code=='p')
    {
        float preminum=25;
        cout<<"enter your time  day or night ";
        cin>>time;
        if(time=="day")
        {
            if(minu<=75 ) 
            {
              cout<<"the charges are " <<preminum;  
            }
            if(minu>75)
            {
               float  minutes=minu-75;
               float bill=(minutes*0.1)+25;
               cout<<"the charges are  :"<<bill;
            }
        }
        if(time=="night")
        {
            if(minu<=100) 
            {
                cout<<"the charges are : "<<preminum;
            }
            if(minu>100)
            {
              float minutes=minu-100;
              float bill=(minutes*0.05)+preminum;
               cout<<"the charges are " <<bill;
            }
        }
    }
    if(code=='r')
    {
        float regular=10;
        if(minu<=50)
         {
            cout<<"the charges are  :"<<regular;
         }
         if(minu>50)
         {
            float minutes=minu-50;
            float bill=(minutes*0.20)+regular;
            cout<<"the charges  are "<<bill;
         }
    }

}