	#include<iostream>
	using namespace std;
	int main()
	{
		int i,j,k,num,array[10];
		// declare the user array size.
		cout<<"Numbers of element present in array?: ";
		cin>>num;
		// declare the elements of array.
		cout<<"\nEnter elements of array\n";
		for(i=0;i<num;++i)
		{
			cin>>array[i];
		}
		//Compare each elements of array with each others	
		for(i=0;i<num;++i)
		{
		for(j=i+1;j<num;)
			{
			if(array[i]==array[j])
				{
				for(k=j;k<num-1;++k)
					{
						array[k]=array[k+1];	
					}
				--num;
				}
			else
			++j;
			}
		}
	cout<<"\n";
	for(i=0;i<num;++i)
		{
			cout<<array[i]<<" ";
		}
	
	}
