#include <iostream>
using namespace std;
int main()
{
int value;
int sum=0;
int numbers[5];
for (int i; i<5;i++)
{
    cout << "enter any number\n";
    cin >> numbers[i];
    //sum+=numbers[i];
}
//cout <<"sum is :\n"<<sum<<"\n"<<"avreag is:\n"<<sum/5<<"\n";

cout<< "enter value\n";
cin >> value;

for(int i=0;i<5;i++)
{
if (numbers[i]==value)
{
    cout<< "Value exists at location\n";
    cout << i<<"\n";
}

}

    return 0;
}
