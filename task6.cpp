#include<iostream>
using namespace std;
main()
{
    int kilometer;
    string time;
    cout<<"enter kilometers  ";
    cin>>kilometer;
    cout<<"enter your time ";
    cin>>time;
    if(kilometer<=20)
    {
        if(time=="day")
        {
            float bill=kilometer*0.79+0.7;
            cout<<bill;
        }
        if(time=="night")
        {
            float bill=kilometer*0.9+0.7;
            cout<<bill;
        }

    }
    if(kilometer>20 && kilometer<=99)
    {
        float bill=0.09*kilometer;
        cout<<bill;
    }
    if(kilometer>100)
    {
        float bill=kilometer*0.06;
        cout<<kilometer;
    }
}