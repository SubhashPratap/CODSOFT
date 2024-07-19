#include<iostream>
using namespace std;

int main()
{
    double num1=0, num2=0;
    char op;
    long long result;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter operator(\'+\', \'-\', \'*\', \'/\'): ";
    cin>>op;
    if(op=='+')
        cout<<num1+num2<<endl;
    if(op=='-')
        cout<<num1-num2<<endl;
    if(op=='*')
        cout<<num1*num2<<endl;
    if(op=='/')
        if(num2!=0)
            cout<<num1/num2<<endl;            
        else
            cout<<"Error! Division by zero,";
    return 0;        
}