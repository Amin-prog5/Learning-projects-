#include <iostream>
using namespace std;
int main()
{
int i=0;
const int g=5;
int list[g];
for (int i=0; i <5;i++)
{
cout <<"enter any number\n";
cin >> list[i];
}
cout <<"The list of squares: \n";
for (int i=0; i <5;i++)
{
cout << list[i]*list[i]<<"\n";
//c =  list[i]*list[i];
}


//cout << list[3];



//int nums [4] = {22,55,66,77};
//cout << "frist elmints is :"<< nums[0]<<"\n";
//cout << sizeof nums/4<<"\n";




    return 0;
}
