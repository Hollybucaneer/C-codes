#include<iostream>
using namespace std;
class acc
{
	int real,img;
	public:
	static int cnt;
	
	acc ()
	{
		cout<<"Default is"<<endl;
		real=5;
		img=5;
		cnt++;
	}	
	
	acc(int real,int img)
	{
		cout<<"parametrized is"<<endl;
		this->real=real;
		(*this).img=img;
		cnt++;	
	}
	
	void display()
	{
		cout<<real<<"+"<<img<<endl;
	}
	
	static int getcnt()
	{
		return cnt;
	}
};

		
	
int acc::cnt=0; 

int main()
{
	acc a1;
	acc a2(45,65);
	cout<<"parametrized"<<acc::getcnt();
	cout<<"size of a1"<<sizeof(a1);
	cout<<acc::cnt<<endl;
	
}

