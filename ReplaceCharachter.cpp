#include<iostream>
#include<string.h>
using namespace std;

// Replace a char in string elements manually

/*int main()
{
	char a[]="Hello World";

	int len=strlen(a);
	char c1;
	
	//Logic
	
	for (int i=0;i<len;i++)
	{
		if(a[i]=='l')
	
			a[i]='u';
		
	
}
	cout << a<<endl;   // Heuuo Worud
}*/



int main()
{
	const int len =10;
	char name[len];
	char c1,c2;
	cout<<"Enter the string"<<endl;
	cin>>name;
	cout<<"enter the ch to be replaced"<<endl;
	cin>>c1;
	cout<<"enter the ch to be put"<<endl;
	cin>>c2;
	char* ptr;
	ptr=name;
	//Logic 2
	
	for(int i=0;i<len;i++)
	{
		if (c1== *(ptr+i))
			*(ptr+i)=c2;
	}
	cout<< name<<endl;
	return 0;
}
     
	 

