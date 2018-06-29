#include <iostream>
using namespace std;
int main (void)
{
    float a, b;
    cout<<"mettre 2 nombres"<<endl;
    cin>>a>>b;
    if (a=b)
    {
        cout<<"les deux valeurs sont egaux";
    }
    else
    {
     if (a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    }
    return 0;
}
