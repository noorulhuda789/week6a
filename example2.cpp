#include<iostream>
using namespace std;
float total(string month,string day ,int amount);
main()
{
    string month,day;
    int amount;
    cout<<"enter month";
    cin>>month;
    cout<<"enter day";
    cin>>day;
    cout<<"enter yout bill ";
    cin>>amount;
    cout<<"your payable amount is " <<total(month,day,amount);
}
float total(string month,string day ,int amount)
{
    float pay=amount ;
    if(day =="sunday")
    {
        if(month == "october" || month == "march" || month =="august")
        {
            float dis=amount*10/100;
            pay =amount -dis ;
        }
        if(month =="")
    }
    return pay;
}