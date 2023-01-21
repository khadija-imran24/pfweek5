#include<iostream>
using namespace std;

main()
{
    int mins;
    int hours;
    cout<<"enter hours(0-23):";
    cin>>hours;
    cout<<"enter minutes (0-59):";
    cin>>mins;
    if (mins<=44)
   {
     mins=mins+15;
     cout<<hours<<":"<<mins<<endl;
    }
    if (mins>=45)
    {
        hours=hours+1;
        mins=60-mins;
        cout<<hours<<":"<<mins<<endl;
      
    }
    if (hours==23)
    {
        hours=hours-23;
        cout<<hours<<":"<<mins<<endl;
    }
}

 
  
