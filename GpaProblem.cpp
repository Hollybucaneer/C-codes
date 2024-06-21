//accept no of subjects and name from the user dynamically and accept marks for each subject and display average and name of the student


#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[50];
	public:
		void setter()
		{
			cout<<"enter your roll number"<<endl;
			cin>>roll_no;
			cout<<"enter your name"<<name<<endl;
			cin>>name;
		}
		void getter()
		{
			cout<<"student roll_no  "<<roll_no<<endl;
			cout<<"student name  "<<name<<endl;
		}

		void subject()
		{
			int sbn;
			cout<<"no. of subject"<<endl;
			cin>>sbn;
			int* sptr;
			sptr = new int[sbn];
			float temp=0.0f;
			for(int l=1;l<=sbn;l++)
			{
				cout<<"enter the marks of subject no."<<l<<endl;
				cin>>sptr[l];
				temp=temp+sptr[l];
			}
			cout<<"average of marks"<<(temp/sbn)<<endl;
			cout<<endl;
		}
};

int main()
{
	int n;
	cout<<"enter the no. of student"<<endl;
	cin>>n;
	int* ptr;
	ptr = new int[n];
	student S1[n];
	for(int i=1;i<=n;i++)
		{
			S1[i].setter();
			S1[i].subject();	
	}
	return 0;
}
