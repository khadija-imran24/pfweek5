#include <iostream>
using namespace std;
string isSymmetrical(int num1,int num2,int num3); 

int main()
{ 
    string result;
    int number3Digit;
    int num1;
    int num2;
    int num3;
    cout<<"enter a 3 digit number";
    cin>>number3Digit;
    num1=number3Digit%10;
    num2=(number3Digit/10)%10;
    num3=(number3Digit/100)%10;
    result=isSymmetrical(num1,num2,num3);
    cout<<result;
}
 string isSymmetrical(int num1,int num2,int num3) 
 {  string result;

    if (num1==num3)
    {
    result="true"; 
    }
    if (num1!=num3)
 { 
    result="false";
 }
 return result;
 }
  