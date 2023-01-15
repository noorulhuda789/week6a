#include<iostream>
using namespace std;
int main()
{
	int x, h, y;
	cout << "enter value of  h";
	cin >> h;
	cout << "enter value of x";
	cin >> x;
	cout << "enter vlue of y";
	cin >> y;
	if (x > 0 && x < (h * 3) && y < h)
	{
		cout << "inside";
	}
	else if (x > h && x < h * 2 && y < h * 4)
	{
		cout << "inside";
     }
	else if (x > h * 3)
	{
		cout << "outside";
	}
	else if (x > h && y > h && y < h * 2)
	{
		cout << "outside";
	}
	else if (x < (h * 3) && y>h)
	{
		
		cout << "outside";
		
	}
	else
	{
		cout << "border";
	}
	return 0;
}
