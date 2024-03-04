#include <iostream>
using namespace std;
int main()
{
int numbers1[5],numbers2[5],numbers3[5];
    cout << "enter number of arry 1\n";
for(int i=0;i<5;i++)
{
   cin >> numbers1[i];
}
    cout << "enter number of arry 2\n";
for(int i=0;i<5;i++)
{
   cin >> numbers2[i];
}

for(int i=0;i<5;i++)
{
    numbers3[i] = numbers1[i]+numbers2[i];
}
 cout << "The Result array:\n";
for(int i=0;i<5;i++)
{

 cout<< numbers3[i]<<"\n";  
}

    return 0;
}
