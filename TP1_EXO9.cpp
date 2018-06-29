#include <iostream>
using namespace std;
int main (void)
{
    int a, i, j;
    cout<<"Quelle est la hauteur du triangle ?";
    cin>>a;
    for (i=1;i<=a;i++){
        for (j=1;j<=i;j++)
    {
            cout<<"*";

    }
            cout<<endl;
}
    return 0;
}
