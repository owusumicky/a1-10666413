#include<iostream>
using namespace std;

int main() {

int no1 , no2 , gcd = 0;


cout<<"Enter Positive Number :  \n";
cin>>no1;

cout<<"Enter Second Positive Number: \n";
cin>>no2;



for(int i=1;i<=no1&&i<=no2;i++)
{

	if(no1%i==0 && no2%i == 0 )
		{
		
		   gcd=i;
	
	    }

}

cout<<"The Greatest Common Divisor of "<<no1<<" and "<<no2<<" is "<<gcd<<endl; 
return 0;
}
