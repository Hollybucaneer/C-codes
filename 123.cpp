#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num_digit;
	int num;
	int multipliear=1;
	cout<<"digits of number"<<endl;
	cin>>num_digit;
	cout<<"enter the number"<<endl;
	cin>>num;
	for(int i=1;i<num_digit;i++)
	{
		multipliear*=10;
		cout<<multipliear<<endl;
	}
//while()
}
