#include<iostream>
using namespace std;
string title(char gender,int age);
main()
{
    int age;
    char gender;
    cout<<"enter your age  ";
    cin>>age;
    cout<<"enter your gender   ";
    cin>> gender;
    cout<<title(gender,age);

}
string title(char gender,int age)
{
    if(gender=='m')
      {
        if(age<16)
        {
            return "Master";
        }
        else
        {
        
                return "Mr .  ";
        }
      }
      if(gender=='f')
      {
        if(age<16)
         {
            return "miss";
         }
         else
         {
            
                return "mrs";
         }
      }
}