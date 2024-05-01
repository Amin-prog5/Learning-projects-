#include <iostream>
using namespace std ;
int main()
{
    
float p[7];
float k=0;
cout<< "enter your gruds\n"; 
for (int i =0 ; i<7;i++)
{
    cin>>p[i];
    k+=p[i];
}
 
 cout <<"Your percentage is :  " <<k*100/700 ;
   
    return 0;
}
