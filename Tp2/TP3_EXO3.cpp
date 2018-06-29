#include <iostream>

using namespace std;

int puissance(int a, int n)
{
int n;
for (i=1;i<=a;i++)
    {
    n=n*n;
    }
}
return n;



int somme (int n)
{
    int m, i;
    m=0;
        for (i=1;i<=m;i++)
        {
            m=m+puissance(i,2);
        }
    cout<<m<<endl;
    return m;
}
int main (void)
{
    int n, i;
    cout<<"donnez un nombre"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<somme(n);
    }
return 0;
}
