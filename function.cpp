#include <iostream>
using namespace std;
int power (int,int);

int main ()
{
int b,p,res;
cout <<"enter base :  ";
cin>>b;
cout <<"enter power :  ";
cin>>p;
res =  power (b,p);
cout<< "result is : "<<res<<endl;


  
}

int power (int b ,int p)
{
int r=1;
for(int i=1;i<=p;i++)

r*=b;

return r;
}








