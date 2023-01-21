#include<iostream>
using namespace std;
main()
{
float volume;
float p1;
float p2;
float totalF;
float percent;
float hrs;
float CP1;
float CP2;
float over;
cout<<"enter the volume of pool:";
cin>>volume;
cout<<"enter the flow rate of pipe1:";
cin>>p1;
cout<<"enter the flow rate of pipe1:";
cin>>p2;
cout<<"enter hours:";
cin>>hrs;
totalF=(p1*hrs)+(p2*hrs);
over=totalF-volume;
percent=(totalF/volume)*100;
CP1=((p1*hrs)/totalF)*100;
CP2=((p2*hrs)/totalF)*100;
if(volume>totalF)
{
    cout<<"the pool is.."<<percent<<"%full"<<endl;
    cout<<"the pipe1 contribution is.."<<CP1<<"%"<<endl;
    cout<<"the pipe2 contribution is.."<<CP2<<"%"<<endl;

}
if(volume<totalF)
{
    cout<<"overflow is.."<<over;
}
}