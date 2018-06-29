#include <iostream>

using namespace std;

const int TAILLE_LIGNE=100;
const int TAILLE_COLONNE=100;

void affichetab(int T[TAILLE_LIGNE][TAILLE_COLONNE],int tailleL,int tailleC);

int main (void)
{
    int a, b;
    cout<<"mettre 2 chiffres"<<endl;
    cin>>a>>b;
    int T[TAILLE_LIGNE][TAILLE_COLONNE];
   affichetab(T, a, b);

   return 0;
}

void affichetab(int T[TAILLE_LIGNE][TAILLE_COLONNE],int tailleL,int tailleC)
{
   int a, b, i, j;
    for (j=1;j<=tailleL;j++)
        {
            for (i=1;i<=tailleC;i++)
            {
               cout<<T[i][j];
            }
    cout<<endl;
        }

}

void rempliretab(int T[TAILLE_LIGNE][TAILLE_COLONNE],int tailleL,int tailleC)
{
    int a, b;
    cin>>a>>b;
}
