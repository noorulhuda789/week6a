#include<cmath>
#include<iostream>
using namespace std;
main()
{
  int holiday,weekend2;
  string year;
  int weekend1=48;
  cout<<"enter year leap or normal ";
  cin>>year;
  cout<<"enter your holidays   leap ";
  cin>>holiday;
  cout<<"enter weekend you spent at yur hometown  ";
  cin>>weekend2;
 if(year=="leap")
 {
    int weekend=weekend1-weekend2;
   int  total1=weekend*3/4;
    int total2=holiday*2/3;
    int total=(weekend2+total1+total2);
   float dis=(weekend2+total1+total2)*0.15;
   int round2=round(dis);
   int final=total+round2;
    cout<<"total  days " <<final;
 }
 if(year=="normal")
 {
      int weekend=weekend1-weekend2;
   int  total1=weekend*3/4;
   int  total2=holiday*2/3;
   int  total=(weekend2+total1+total2);
    cout<<"total  days " <<total;
 }
}