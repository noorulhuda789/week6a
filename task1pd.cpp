#include<iostream>
using namespace std;
main()
{
    string temperature,humidity;
    cout<<"ener temperature state cold or warm ";
    cin>>temperature;
    cout<<"enter  humidity difference dry or humid ";
    cin>>humidity;
if(temperature=="warm"  && humidity=="dry")
{
    cout<<"play tenis ";
}
if(temperature=="cold"  && humidity=="dry")
{
    cout<<"play basketball";

}
if(temperature=="warm"  && humidity=="humid")
{
    cout<<"swim";
}
if(temperature=="cold"  && humidity=="humid")
{
    cout<<"watch tv";
}
}