#include<iostream>
using namespace std;
string oddishOrEvenish(int,int,int,int,int);
main()
{
string result;
int num5Digit;
int num1;
int num2;
int num3;
int num4;
int num5;
cout<<"enter 5 digit number";
cin>>num5Digit;
num1=num5Digit%10;
num2=(num5Digit/10)%10;
num3=(num5Digit/100)%10;
num4=(num5Digit/100)%10;
num5=(num5Digit/100)%10;
result=oddishOrEvenish(num1,num2,num3,num4,num5);
cout<<result;
}
string oddishOrEvenish(int num1,int num2,int num3, int num4,int num5)
{
    int sum;
    sum=num1+num2+num3+num4+num5;
    if (sum%2==0)
    {
        return "Evenish";
    }
    if (sum%2==1)
    {
        return "oddish";
    }
}