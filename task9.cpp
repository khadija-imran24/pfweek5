  #include <iostream>
  #include <cmath>
  using namespace std;
 
  main()
{
	float x1;
	float x2;
 	float b=6;
        float a=5;
 	float c=1;
	x1=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
	x2=(-b-(sqrt((b*b)-(4*a*c))))/(2*a);
  	cout<<"x= "<<x1<<"or x="<<x2;

}