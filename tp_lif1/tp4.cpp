#include <iostream>

using namespace std;

const int TAILLE_LIGNE=100;
const int TAILLE_COLONNE=100;
void remplit(int T[TAILLE_LIGNE][TAILLE_COLONNE], int& ligne, int& colonne);
void  afficher(int T[TAILLE_LIGNE][TAILLE_COLONNE],int l,int c);
int somme_ligne(int T[TAILLE_LIGNE][TAILLE_COLONNE],int l,int c,int indice);
int somme_colonne(int T[TAILLE_LIGNE][TAILLE_COLONNE],int l, int c, int indice);

int main()
{
	int L,C,z,q;
	int s, s2;
	int T[TAILLE_LIGNE][TAILLE_COLONNE];
	s=0;
	cout<<"mettre la valeur de la ligne";
	cin >> L;
	cout<<"mettre la valeur de la colonne";
	cin >> C;
	remplit(T,L,C);
	afficher(T,L,C);
	cout <<"mettre la ligne pour faire la somme"<<endl;
	cin>>z;
	s=somme_ligne(T,L,C,z);
	cout <<s<<endl;
	cout <<"mettre la colonne pour faire la somme"<<endl;
	cin >> q;
	s2=somme_colonne(T,L,C,q);
	cout << s2<< endl;
	
	
	return 0;	
}

void remplit(int T[TAILLE_LIGNE][TAILLE_COLONNE], int& ligne, int& colonne)
{
	int i,j,k;
	cout <<"remplir la ligne";
		for (i=0;i<ligne;i++)
		{
		
	
			for (j=0;j<colonne;j++)
			{
				cin >>T[i][j];
			}
		}
}

void  afficher(int T[TAILLE_LIGNE][TAILLE_COLONNE],int l,int c)
{
	int i ,j;
	for (i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
			{
				cout<<T[i][j]<<" ";
				
			}
		cout << endl;
	}
}

int somme_ligne(int T[TAILLE_LIGNE][TAILLE_COLONNE],int l,int c,int indice)
{
	int i, j, s;
	s=0;
	for (j=0;j<l;j++)
	{
		s+=T[indice][j];
	}
return s;
}

int somme_colonne(int T[TAILLE_LIGNE][TAILLE_COLONNE],int l, int c, int indice)
{
	int i, s;
	s=0;
	for (i=0;i<c;i++)
	{
		s+=T[i][indice];
	}
}


	




		
