#include <iostream>
using namespace std ;
int main (void)
{
    int a, b, i, j;

    cout<<"quelles sont les dimensions du rectangle: longeur ?"<<endl;
    cin>>a;
    cout<<"la largeur"<<endl;
    cin>>b;

    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
        {
            cout<<"*";

        }
            cout<<endl;
    }



    return 0;
}
