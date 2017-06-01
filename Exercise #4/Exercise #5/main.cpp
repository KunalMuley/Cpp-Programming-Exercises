#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Please enter the year number"<<endl;
    cin>>year;


    if(year>1752 && (year%4)==0 && (year%400)==0 && (year%100)==0)
    {
        cout<<"It is a leap year!"<<endl;
    }
    else
    {
        cout<<"It is not a leap year!"<<endl;
    }
    return 0;
}
