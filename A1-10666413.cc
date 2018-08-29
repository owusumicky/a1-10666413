#include <iostream>

using namespace std;

int main()

{

	int num, i = 0;
	bool isprime = true;

	cout <<"Enter a positive integer: \n";
	cin >> num;

    for (i = 2; i<=num/2; ++i)

    if (num % i == 0)
    {

        isprime = false;

        break;

    }
if (isprime)
{


   cout <<" This is a prime number \n \n";
}

   else
   {


   cout <<" This is not a prime number \n \n";
   }



   return 0;
   }






