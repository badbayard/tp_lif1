#include <iostream>
using namespace std;
void moyenne (float a,float b)
{
    cout<<(a+b)/2;
}
int main (void)
{
    float a, b;
    cout<<"mettre deux notes"<<endl;
    cin>>a>>b;
    moyenne( a, b);
    return 0;
}
