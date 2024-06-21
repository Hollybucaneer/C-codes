#include <iostream>
using namespace std;

int main()
{
//      * 
//     * * 
//    * * * 
//   * * * * 
//    * * * 
//     * * 
//      *

    int nol=1,num,space=5,star=1;
    for(;nol<=7;nol++)
    {
                for(num=1;num<=space;num++)
                {
                    cout<<" ";
                }
                for(num=1;num<=star;num++)
                {
                    cout<<"* ";
                }
                if(nol>3)
                {
                    space++;
                    star--;
                }
                else
                {
                    space--;
                    star++;
                }
                cout<<endl;
    }

    return 0;
}
