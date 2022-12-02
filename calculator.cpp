#include<iostream>
using namespace std;

int main(){
    int num1,num2,opr;

    cout<<"Enter first number:\n";
    cin>>num1;
    cout<<"Enter second number:\n";
    cin>>num2;
    cout<<"Press 1 for Addition\n"
        "Press 2 for Substraction\n"
        "Press 3 for Multiplication\n"
        "Press 4 for Divison\n";
    cin>>opr;

    if (opr==1)
    {
        cout<<num1," + " ,num2," = ",num1+num2;
    }
    else if (opr==2)
    {
        cout<<num1," - " ,num2," = ",num1-num2;
    }
    else if (opr==3)
    {
        cout<<num1," X " ,num2," = ",num1*num2;
    }
    else if (opr==4)
    {
        cout<<num1," / " ,num2," = ",num1/num2;
    }
    else{
        cout<<"something went wrong!!!";
    }

    



}