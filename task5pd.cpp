#include<iostream>
using namespace std;
main()
{
    float quantity;
    string fruitname,day;
    cout<<"enter day you shopped :";
    cin>> day;
    cout<<"enter your fruit name ";
    cin>>fruitname;
    cout<<"enter quantity you want :";
    cin>>quantity;
    if(day!="monday"|| day!="tuesday" ||day!="wednesday" ||day!="thursday" || day!="friday"|| day!="sunday" || day!="saturaday")
    {
        cout<<"invalid";

    } 
     if(fruitname!="banana" || fruitname!="orange" ||fruitname!="kiwi" ||fruitname!="apple" || fruitname!="pineapple" || fruitname!="graphes")
     {
        cout<<"invalid";
     }
     if(day=="monday"|| day=="tuesday" ||day=="wednesday" ||day=="thursday" || day=="friday" )
    {
        float bill;

        if(fruitname=="banana")
        {
            float banana=2.50;
             bill=banana*quantity;
        }
        if(fruitname=="apple") 
        {   
        float apple=1.20;
        bill=apple*quantity;
        }
        if(fruitname=="orange")
        {
        float orange=0.85;
        bill=orange*quantity;
        }
        if(fruitname=="grapefruit")
        {
        float grapefruit=1.45;
        bill=grapefruit*quantity;
        }
        if(fruitname=="kiwi")
        {
        float kiwi=2.70;
        bill=kiwi*quantity;
        }
        if(fruitname=="pineapple")
        {
        float pineapple=5.50;
        bill=pineapple*quantity;
        }
        if(fruitname=="grapes")
        {
        float grapes=3.85;
        bill=grapes*quantity;
        }
        cout<<bill;

    }
    if(day=="sunday" ||day=="saturaday")
    {
        
    
            float bill;
    
            if(fruitname=="banana")
            {
                float banana=2.70;
                 bill=banana*quantity;
            }
            if(fruitname=="apple") 
            {   
            float apple=1.25;
            bill=apple*quantity;
            }
            if(fruitname=="orange")
            {
            float orange=0.9;
            bill=orange*quantity;
            }
            if(fruitname=="grapefruit")
            {
            float grapefruit=1.60;
            bill=grapefruit*quantity;
            }
            if(fruitname=="kiwi")
            {
            float kiwi=3.00;
            bill=kiwi*quantity;
            }
            if(fruitname=="pineapple")
            {
            float pineapple=5.60;
            bill=pineapple*quantity;
            }
            if(fruitname=="grapes")
            {
            float grapes=4.20;
            bill=grapes*quantity;
            }
            cout<<bill;
    
        }

    
}