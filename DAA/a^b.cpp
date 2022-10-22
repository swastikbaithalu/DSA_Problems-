// C++ program to calculate pow(x,n)
#include <iostream>
using namespace std;
int power(int x, int y)
{
	int temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
		return x * temp * temp;
}



int main()
{
    int x,y;
    cout<<"Enter a and b for a^b"<<endl;
    cin>>x>>y;

	cout <<x<<"^"<<y<<" = "<< power(x, y);
	return 0;
}

