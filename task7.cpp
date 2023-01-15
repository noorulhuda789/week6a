#include<iostream>
using namespace std;
float checkcost(string city ,string product,int quantity);
main()
{
    int quantity;
    string product, city;
    cout<<"enter your city  ";
    cin>>city;
    cout<<"enter yout product  ";
    cin>>product;
    cout<<"enter quantity you want  ";
    cin>>quantity;
    cout<<checkcost(city,product,quantity);

}
float checkcost(string city ,string product,int quantity)
{ 
    float bill=0;
    if(city=="sofia")
    {
        if(product=="coffee")
        {
           bill=0.50*quantity;
        
        }
        if(product=="water")
        {
            bill=0.80*quantity;
            
        }
        if(product=="beer")
        {
            bill =1.20*quantity;
            
        }
        if(product=="sweets")
        {
            bill=1.45*quantity;
            
        }
        if(product=="peanuts")
        {
            bill=1.60*quantity;
        
        }
    }
        if(city=="plodiv")
    {
        if(product=="coffee")
        {
           bill=0.40*quantity;
           
        }
        if(product=="water")
        {
            bill=0.70*quantity;
            
        }
        if(product=="beer")
        {
            bill =1.15*quantity;
        
        }
        if(product=="sweets")
        {
            bill=1.30*quantity;
        
        }
        if(product=="peanuts")
        {
            bill=1.50*quantity;
            
        }
    }
        if(city=="varna")
    {
        if(product=="coffee")
        {
           bill=0.45*quantity;
        
        }
        if(product=="water")
        {
            bill=0.70*quantity;
            
        }
        if(product=="beer")
        {
            bill =1.10*quantity;
        
        }
        if(product=="sweets")
        {
            bill=1.35*quantity;
    
        }
        if(product=="peanuts")
        {
            bill=1.55*quantity;
    
        }
    }
    return bill;
}