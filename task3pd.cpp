#include<iostream>
using namespace std;
main()
{
   int birth;
   string month;
   cout<<"enter month  :";
   cin>>month;
   cout<<"enter your date of birth : ";
   cin>>birth;
   if(month=="march")
   {
      if(birth>=1 && birth<=20 )
      {
         cout<<"pices";
      }
      if(birth>=21 && birth<=30)
      {
         cout<<"aries";
      }
   }
     if(month=="january")
   {
      if(birth>=1 && birth<=19 )
      {
         cout<<"capricon";
      }
      if(birth>=20 && birth<=30)
      {
         cout<<"aquaries";
      }
   }
     if(month=="february")
   {
      if(birth>=1 && birth<=19 )
      {
         cout<<"aquaries";
      }
      if(birth>=20 && birth<=30)
      {
         cout<<"pisces";
      }
   }
     if(month=="april")
   {
      if(birth>=1 && birth<=19 )
      {
         cout<<"pices";
      }
      if(birth>=20 && birth<=30)
      {
         cout<<"taurus";
      }
   }
     if(month=="may")
   {
      if(birth>=1 && birth<=20 )
      {
         cout<<"taurus";
      }
      if(birth>=21 && birth<=30)
      {
         cout<<"gemini";
      }
   }
     if(month=="june")
   {
      if(birth>=1 && birth<=20 )
      {
         cout<<"gemini";
      }
      if(birth>=21 && birth<=30)
      {
         cout<<"cancer";
      }
   }
     if(month=="july")
   {
      if(birth>=1 && birth<=22 )
      {
         cout<<"cancer";
      }
      if(birth>=23 && birth<=30)
      {
         cout<<"leo";
      }
   }
     if(month=="august")
   {
      if(birth>=1 && birth<=22 )
      {
         cout<<"leo";
      }
      if(birth>=23 && birth<=30)
      {
         cout<<"virgo";
      }
   }
        if(month=="september")
   {
      if(birth>=1 && birth<=22 )
      {
         cout<<"virgo";
      }
      if(birth>=23 && birth<=30)
      {
         cout<<"libra";
      }
   }
     if(month=="october")
   {
      if(birth>=1 && birth<=22 )
      {
         cout<<"virgo";
      }
      if(birth>=23 && birth<=30)
      {
         cout<<"scorpio";
      }
   }
     if(month=="november")
   {
      if(birth<=1 && birth<=21 )
      {
         cout<<"scorpio";
      }
      if(birth>=22 && birth<=30)
      {
         cout<<"capricon";
      }
   }
     if(month=="december")
   {
      if(birth>=1 && birth<=21 )
      {
         cout<<"sagittarius";
      }
      if(birth>=22 && birth<=30)
      {
         cout<<"capricon";
      }
   }
}