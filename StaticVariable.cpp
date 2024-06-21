#include <iostream>  
using namespace std;  
class complex
{
	int real,img;
public:	static int cnt;
	public:
		complex()
		{
			cout<<"default is invoked\n";
			real=5;
			img=5;
			cnt++;
		}
		complex(int real,int img)
		{
			cout<<"parametrized is invoked\n";
			this->real=real;
			this->img=img;
			cnt++;	
		}
		static int getcnt()
		{
			return cnt;
		}
};
//datatype classname::staticvar_name=value;
int complex::cnt=0;//memory alloaction takes place
int main()
{
	complex c1;
	complex c2(10,10);
	cout<<"no of obj created is   "<<complex::getcnt();
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
	cout<<complex::cnt;//possible only if data member is public
}

