#include<iostream>
using namespace std;
char calculate(int marks);
main()
{
    int marks;
    cout<<"enter marks";
    cin>>marks;
    cout<<"yout grade is" <<calculate(marks); 
}
char calculate(int marks)
{
    if(marks<50)
    {
        return 'f';
    }
    else if(marks>=50 && marks<=60)
    {
        return 'E';
    }
    else if(marks>60 && marks<=70 )
    {
        return 'D';
    }
    else if (marks>70 && marks <=80)
    {
        return 'C';
    }
    else if(marks>80 && marks <=85)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
    return 0;
}