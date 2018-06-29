#include <iostream>
using namespace std;
int main (void)
{

    float a, b, c;
    char  operation;
    cout<<"mettre 2 chiffres entre 1 et 10"<<endl;
    cin>>a>>b;
    if (((a>0)&&(a<=10))&&((b>0)&&(b<=10)))
    {
    cout<<"mettre une operation"<<endl;
    cin>>operation;
    switch (operation)
    {
        case'+':
        c=a+b;
        break;
        case'-':
        c=a-b;
        break;
        case'/':
        c=a/b;
        break;
        case'*':
        c=a*b;
        break;
        default:
        cout<<"error";
    }
    cout<<c<<endl;
    }
    else

    {
        cout<<"pas dans l'intervalle"<<endl;
    }
    return 0;
}
