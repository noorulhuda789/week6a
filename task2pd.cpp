#include<iostream>
using namespace std;
main()
{
    int english,math,chemistry,socialscience,biology;
    cout<<"enter marks in english";
    cin>>english;
    cout<<"enter marks in maths";
    cin>>math;
    cout<<"enter marks in chemistry ";
    cin>>chemistry;
    cout<<"enter marks in socialscience ";
    cin>>socialscience;
    cout<<"enter marks in biology ";
    cin>>biology;
    float  obtmarks=biology+math+english+socialscience+chemistry;
    float per=(obtmarks/500)*100;
    if(per>=90 && per<=100)
    {
        cout<<"A+ ";
    }
    if(per>=80 && per<90)
    {
        cout<<"A";
    }
    if(per>=70 && per<80)
     {
           cout<<"B+";
     }
    if(per>=60 && per<70)
    {
        cout<<"B";
    }
    if(per>=50 && per<60)
    {
        cout<<"C";
    }
    if(per>=40 && per<50)
    {
      cout<<"D";
    }
    if(per<40)
    {
        cout<<"f";
    }

}