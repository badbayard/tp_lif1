#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include<time.h>

using namespace std;

const int TAILLE_GRILLE=2
;
char t[TAILLE_GRILLE][TAILLE_GRILLE][15];
void initialisation (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15]);
void affichage (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15]);
void remplissage (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15]);

int main ()
{
	
	int i ,j;
	initialisation(t);
	remplissage(t);
	affichage(t);
	

	return 0;

}


void initialisation (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15])
{

	int i,j;
	
	for (i=0;i<TAILLE_GRILLE;i++)
	{
		for (j=0;j<TAILLE_GRILLE;j++)
			{
				grille[i][j][0]='*';
				grille[i][j][1]='\0';
			}
	}
}

void affichage (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15])
{
	int i,j,k;

	for (i=0;i<TAILLE_GRILLE;i++)
	{
		for (j=0;j<TAILLE_GRILLE;j++)
		{
			cout<<t[i][j];
			for (k=0;k<15-strlen(t[i][j]);k++)
			{
				cout<<" ";
			}
		}
		cout <<endl;
	}
}

void remplissage (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15])
{
	int i, j,lig,col, num_pair;
	char mot[15];
	for(num_pair=0;num_pair<(TAILLE_GRILLE*TAILLE_GRILLE)/2;num_pair++)
	{
			cout <<"saisie le mot"<<num_pair<<endl;
			cin >>mot;
		for(i=0;i<2;i++)
			{
				do
					{
						lig=rand()%TAILLE_GRILLE;
						col=rand()%TAILLE_GRILLE;
					}
				while(strcmp(grille[lig][col],"*")!=0);
				cout <<lig<<" "<<col<<endl;
				strcpy(grille[lig][col],mot);
			}
		}
}

void choix (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15],char solution[TAILLE_GRILLE][TAILLE_GRILLE][15], int &l1,int &l2,int &c1, int &c2)
{
	cout <<"coordonnées de la premiére case" <<endl;
	cin>>l1;
	cout<<endl;
	cout<<"coordonnees de la seconde case"<<endl;
	cin>>l2;
	cin>>c2;
	cout<<endl;
	
}

/*bool verif (char grille[TAILLE_GRILLE][TAILLE_GRILLE][15])
{
	int l1,l2,c1,c2;
	choix(char grille,l1,l2,c1,c2;);
	if(
*/	
