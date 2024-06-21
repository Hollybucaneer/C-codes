#include<iostream>
#include<string.h>
using namespace std;

// Reverse case
/*int main()
{
	char a[]="hello World";
	
		// Logic 
	
	if(a[0]>='a')
	{
		a[0]=a[0]+32;
	}
	else
		a[0]=a[0]-32;
		int len=strlen(a);
		cout<<a<<endl;
		
	for(int i=0;i<len;i++)
	{
		if (a[i]== ' ' && a[i]!=' ')
		{
			if (a[i+1]='a')
			a[i+1]=a[i+1]-32;	
		}	
		else
			a[i+1]=a[i+1]+32;
	}
	for(int i=0;i<len;i++)
	cout<<a[i]<<endl;
}*/


		//Reverse Case User defined
int main()
{
	char str[20];
	cout<<"enter the string"<<endl;
	cin>>str;
	if(str[0]>=65 && str[0]<=90)
		str[0]=str[0]+32;
	else
		str[0]=str[0]-32;
	cout<<"after change \n"<<endl<<str;
}



	
