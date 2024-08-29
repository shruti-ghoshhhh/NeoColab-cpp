// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int id;
    double s;
    char c;
    cin>>id>>s>>c;
    cout<<"Employee ID: "<<id<<endl;
    cout<<"Salary: "<<fixed<<setprecision(2)<<s<<endl;
    cout<<"Department code: "<<c;
}