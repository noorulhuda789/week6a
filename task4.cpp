#include<iostream>
using namespace std;
float lowerprice(int kilometer ,string time);
main()
{
    int kilometer;
    string time;
    cout<<"enter kilo meter";
    cin>>kilometer;
    cout<<"enter your time";
    cin>>time;
    cout<<lowerprice(kilometer,time);

}
float lowerprice(int kilometer ,string time)
{

    if(kilometer<=100)
    {
       float total=kilometer*0.06;
       return total; 
    }
    if(kilometer>20 && kilometer<=99)
    {
       float total=kilometer*0.09;
       return total;
    }
    if(kilometer>0 && kilometer<=20)
    {
        if(time=="day")
        {
            float total= kilometer*0.79;
            return total;
        }
        if(time =="night")
        {
            float total= kilometer*0.90;
            return total;

        }
        
    }
    return 0;
}