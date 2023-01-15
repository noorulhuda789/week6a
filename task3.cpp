#include<iostream>
using namespace std;
string reslut(int speed);
main()
{
    int speed;
    cout<<"enter speed  ";
    cin>>speed;
    cout<<reslut(speed);
}
string reslut(int speed)
{
     string check;
    if(speed<=10)
    {
        check="slow";
    }
   else if(speed>10 && speed<=50)
   {
    check="average";

   }
   else if(speed>50 && speed<=150)
   {
    check="fast";

   }
   else if (speed>150 && speed <=1000)
   {
    check ="veryfast";
   }
   else
   {
    check="dangerous";
   }
   return check;
}

