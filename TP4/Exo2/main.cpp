#include <iostream>
#include <stdlib.h>
using namespace std ;
void proc_mult(int a, int b, int& ab)
{
cout << "execution de la procedure proc_mult" << endl;
ab = a*b;
}
int fonc_mult(int a, int b)
{
cout << "execution de la fonction fonc_mult" << endl;
return a*b;
}
void kezako(int x, int y, int r1, int& r2)
{
 proc_mult( x, y, r1);
r2 = fonc_mult(x,y);
 cout << "A la fin de kezako r1=" << r1 << " r2=" << r2 <<endl;
}
int main(void)
{
int a, y, res1, res2;
a = 5; y = 4; res1 = 0; res2 = 1;
 cout << "Dans main avant kezako res1=" << res1 << " res2=" << res2 <<endl;
 kezako( a, y, res1, res2);
 cout << "Dans main apres kezako res1=" << res1 << " res2="<< res2 << endl;
 system("PAUSE") ;
return EXIT_SUCCESS;
}
