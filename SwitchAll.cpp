#include <iostream>
using namespace std;

int main()
{
	int choice, num, i,rem;
	cout<<"Enter the choice of operation you want to perform from following list\n1.Armstrong number.\n2.Prime number.\n3.Reverseing number.\n4. Fibonacci series.\n5. Power of number.\n6. palindome."<<endl;
	cin >>choice;
	switch(choice)
	{
		case 1:
			
				//Armstrong number
				
				
			{
			int sum=0,temp;    
			cout<<"Enter the Number=  ";    
			cin>>num;    
			temp=num;    
			while(num>0)    
			{    
				rem=num%10;    
				sum=sum+(rem*rem*rem);    
				num=num/10;    
			}    
			if(temp==sum)    
			cout<<"Armstrong Number."<<endl;    
			else    
			cout<<"Not Armstrong Number."<<endl;   
			 	
				break;
			}
		case 2:
			
				// Prime Number
				
				
			{
				int m=0, flag=0;  
  				cout << "Enter the Number to check Prime: ";  
  				cin >> num;  
  				m=num/2;  
  				for(i = 2; i <= m; i++)  
  				{  
      				if(num % i == 0)  
      				{  
          				cout<<"Number is not Prime."<<endl;  
          				flag=1;
					    break;  
    	  			}  
  				}  
  				if (flag==0)  
      			cout << "Number is Prime."<<endl;  
				break;
			}
			
		case 3:
			
				//Reverse number
				
				
			{
				int reverse=0;    
				cout<<"Enter a number: ";    
				cin>>num;    
  				while(num!=0)    
  				{    
     				rem=num%10;      
     				reverse=reverse*10+rem;    
     				num/=10;    
  				}    
 				cout<<"Reversed Number: "<<reverse<<endl;     
				break;
			}
		case 4:
			
				//Fibonacci Series
				
				
			{
				int n1=0,n2=1,n3;    
 				cout<<"Enter the number of elements: ";    
 				cin>>num;    
 				cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 				for(i=2;i<num;++i) //loop starts from 2 because 0 and 1 are already printed    
 				{    
 					 n3=n1+n2;    
 					 cout<<n3<<" ";    
 					 n1=n2;    
 					 n2=n3;    
 				}    	
				break;
			}
		case 5:
			
			
				//Exponent
				
				
			{
				int base, exponent;
  				long result=1;
				cout << "Enter base and exponent: ";
  				cin >> base >> exponent;
				for (int i = exponent; i >= 1; i--)
  				{
    				result *= base;
  				}
  				cout << "Result = " << result << endl; 	
				break;
			}
		case 6:
			
			
			// Palindrome number
			
			
			{
				int sum=0,temp;    
  				cout<<"Enter the Number=";    
  				cin>>num;    
 				temp=num;    
 				while(num>0)    
				{    
 					rem=num%10;    
 					sum=(sum*10)+rem;    
 					num=num/10;    
				}    
				if(temp==sum)    
				cout<<"Number is Palindrome.";    
				else    
				cout<<"Number is not Palindrome.";   
				break;
			}
		defaulf:
			cout<<"Enter choice is invalid"<<endl;
	}
	return 0;
}
