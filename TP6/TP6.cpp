# include <iostream>
# include <string.h>
# include <time.h>
# include <stdlib.h>

using namespace std ;
const int TAILLE_GRILLE=4;


void initialisation(char grille[TAILLE_GRILLE][TAILLE_GRILLE][100])
{
    int i, j;
    for (i = 0;i <= TAILLE_GRILLE-1; i++)
    {
        for (j = 0;j <= TAILLE_GRILLE-1; j++)
        {
            strcpy(grille[i][j], "*");
        }
    }
}



void remplir (char grille[TAILLE_GRILLE][TAILLE_GRILLE][100])
{

    int l, c, i, j;
    char mot[100];
    for (i = 0;i <= ((TAILLE_GRILLE*TAILLE_GRILLE)/2);i++)
    {
        cout<<"donne moi 1 mot";
        cin>>mot;
        for (j = 0;j<2; j++)
        {
            do
            {
                l = rand() % TAILLE_GRILLE;
                c = rand() % TAILLE_GRILLE;
                strcpy(grille[l][c],mot);
            }while ((strcmp (grille[l][c],"*"))!=0);
        }
    }

}

void choisir(char  grille[TAILLE_GRILLE][TAILLE_GRILLE][100])
{
    int i, j,c2, l1, l2, c1;
    cout<<"donne moi un autre";
    cin>>l2>>c2;
    for (i = 0;i< TAILLE_GRILLE;i++)
    {
        for (j = 0; j<=TAILLE_GRILLE-1; j++)
        {
            if( ((i==l1)&&(j==c1))||((i==l2)&&(j==c2)) )
            {
                cout<<grille[i][j]<<" ";
            }
            else
            {
                cout<<" "<<endl;
            }
        }
        cout<<endl;
    }
}


int main (void)
{
    char grille[TAILLE_GRILLE][TAILLE_GRILLE][100];
    int l1, c1, l2, c2;
    initialisation(grille);
    remplir(grille);
    choisir(grille, l1,c1,l2,c2);
    return 0;
}


