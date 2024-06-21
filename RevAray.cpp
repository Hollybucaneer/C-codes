#include<iostream>
using namespace std;

int main()
{
	char arr[15];
	char revarr[15];
	int count=0;
	cout<<"enter the name"<<endl;
	cin>>arr;
	
	//logic
	while(arr[count]!='/0')
	{
		count++;
	}
	for(int i=0;i<count;i++)
	{
		revarr[i]=arr[count-i-1];
	}
	cout<<revarr;
}
