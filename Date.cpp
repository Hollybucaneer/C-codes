#include<iostream>
using namespace std;
class MyDate
{
    int dd,mm,yy;
    public:
    void SetDate(int,int,int);
    void display();
    void SetDay(int);
    int getYear();
};
void MyDate::SetDate (int d,int m,int y)
{
    dd=d;
    mm=m;
    yy=y;
}
void MyDate::display()
{
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int MyDate::getYear()
{
    return yy;
}
int main()
{
    MyDate s1;
    s1.SetDate(25,3,24);
    s1.display();
    s1.SetDay(26);
    s1.display();
    cout<<"Year is"<<s1.getYear();

}
