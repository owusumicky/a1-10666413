#include <iostream>

using namespace std;


void map()
{
    cout<<"\n";
    cout << "***********GRADING REFERENCE************ \n";
    cout << "80 - 100 : A \n";
    cout << "75 - 79  : B+         70 - 74  : B \n";
    cout << "65 - 69  : C+         60 - 64  : C \n";
    cout << "55 - 59  : D+         50 - 54  : D \n";
    cout << "45 - 49  : E          0 - 44   : F \n";
}
int main()
{
    float a;

    cout << "*****PROPHET MIKE GRADING APP****** \n\n";
    cout << "Enter your Score to know your grade \n";
    cin>>a;

    if(a >= 80 && a <= 100)
    {
       cout << "GRADE : A \n";
    }

    else if(a >= 75  && a <= 79)
    {
       cout << "GRADE : B+ \n";
    }

    else if(a >= 70 && a <= 74)
    {
       cout << "GRADE : B \n";
    }

    else if(a >= 65 && a <= 69)
    {
       cout << "GRADE : C+ \n";
    }

    else if(a >= 60 && a <= 64)
    {
       cout << "GRADE : C \n";
    }

    else if(a >= 55 && a <= 59)
    {
       cout << "GRADE : D+ \n";
    }

    else if(a >= 50 && a <= 54)
    {
       cout << "GRADE : D \n";
    }

    else if(a >= 45 && a <= 49)
    {
       cout << "GRADE : E \n";
    }

    else if(a >= 0 && a <= 44)
    {
       cout << "GRADE : F \n";
    }

    else
    {
       cout << "No  grading found for your score \n";
    }

    map();
    return 0;

}
