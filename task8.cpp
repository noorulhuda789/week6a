#include<iostream>
using namespace std;
main()
{
    int person,budget;
    string seat;
    cout<<"which type of seat you want t select vip o normal ";
    cin>>seat;
    cout<<"enter your budget  ";
    cin>>budget;
    cout<<"enter number of persons  ";
    cin>>person;
    float afterexpense;
   
    if(person>=1 && person<=4)
    {
        afterexpense=budget*0.75;
    }
    if(person>4 &&person<=9)
    {
        afterexpense=budget*0.6;
    }
    if(person>9 && person<=24)
    {
        afterexpense=budget*0.5;
    }
    if(person>24 &&person<=49)
    {
        afterexpense=budget*0.40;
    }
    if(person>=50)
    {
        afterexpense=budget*0.25;
        
    }
    if(seat=="vip")
    {
        float vip=499.9;
        float sum=person*vip;
        float total=afterexpense+sum;
        if(total>budget)
        {
            float totalbill=total-budget;
            cout<<"not enough money you need "<<totalbill;
        }
        if(total<budget)
        {
            float totalbill=budget-total;
            cout<<"yes you have  "<<totalbill;
        }
    }   
     if(seat=="normal")
    {
        float normal=249.99;
        float sum=person*normal;
        float total=afterexpense+sum;
        if(total>budget)
        {
            float totalbill=total-budget;
            cout<<"not enough money you need "<<totalbill;
        }
        if(total<budget)
        {
            float totalbill=budget-total;
            cout<<"yes you have  "<<totalbill;
        }
    }

}