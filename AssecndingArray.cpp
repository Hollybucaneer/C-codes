#include<iostream>
using namespace std;

int main()
{
	int a[5]={15,32,56,85,79};
	
	for (int i=0;i<5;i++)
	{
//		for (int j=1;j<5;j++)
	//	{
			if (a[i]>a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	//	}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<'\t';
	}
}
