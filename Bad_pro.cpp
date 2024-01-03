
#include <iostream>

using namespace std;

int main()
{
    int num, sumeven=0, sumodd=0;
 for(int i=1;i<=10;i++)
   {
      cout <<"enter num\n";
      cin >> num;
      if (num %2==0)
      sumeven+=num;
      else
      sumodd+=num;
   }
   cout << "sum even is \n" << sumeven<<"\n";
   cout << " sum odd is\n" << sumodd;
          
      
   
   return 0;
}
