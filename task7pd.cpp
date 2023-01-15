#include<iostream>
using namespace std;
main()
{
    int arrivehour,examhour,arrivemin,exammin;
    cout<<"enter hours when  whwn exam start ";
    cin>>examhour;
    cout<<"enter exam minu ";
    cin>>exammin;
    cout<<"enter arrival hour  ";
    cin>>arrivehour;
    cout<<"enter arrival  minutes  ";
    cin>>arrivemin;
    int total1=(arrivehour*60)+arrivemin; 
    int total2=(examhour*60)+exammin;
    if(total1>total2)
    {
        cout<<"late" <<endl;
        int diff =total1-total2;
            int hour=diff/60;
        int minutes=diff%60;
        
        cout<<"he is late "<<hour <<"  : "<<minutes;
    }
    if(total2>total1)
    {
        cout<<"early" <<endl;
        int diff =total2-total1;
        int hour=diff/60;
        int minutes=diff%60;
        cout<<"he is early " <<hour <<"  : " <<minutes;
    }
    if (total1==total2)
    {
        cout<<"on time";
    }
}