#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
	Complex()
	{
		
		}
	Complex(int r,int i)
	{
		int real=r;
		int img=i;	
	}	
	void display()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	Complex add(Complex &c)
	{
		Complex temp;
		temp.real=this->real+c.real;
		temp.img=this->img+c.img;
		return temp;
	}
};
int main()
{
	Complex c1(1,2);
	Complex c2(2,4);
	Complex c3=c1.add(c2);
	c3.display();
}
