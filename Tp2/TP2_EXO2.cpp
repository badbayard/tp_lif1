
#include <iostream>

/*using namespace std;
void factorielle (int a)
{
int i, f;
if (a<0)
{
    cout<<"refaire";
}


    for(i=2;i<=a;i++)
    {
           f=a*i;
    }
    cout <<i<<endl;
;
}
int main (void)
{
    int i, a;
    cout<<"factorielle de"<<endl;
    cin>>a;
    factorielle(a);
    return 0;
}
*/

using namespace std;
void factorielle (double n)
{
    double i, f, m;
    if (n<0)
    {
        cout<<"refaire"<<endl;
    }
    else
    {

        f=1;
        for (i=2;i<=n;i++)
        {
            f=f*i;
        }
        cout<<f;
    }
}
int main (void)
{
    double i, n;
    cout<<"factorielle de : ";
    cout<<factorielle;
    cin>>n;
    factorielle(n);
    return 0;
}
