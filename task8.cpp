  #include <iostream>
  #include <cmath>
  using namespace std;
 
  main()
  {
   float result;
   int distance=43;
   float degree=30;
   float radian;
  
   radian=degree/57.2958;
   result=tan(radian)*distance;
   cout<<"result:"<<result;
   
  
}