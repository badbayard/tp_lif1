#include <iostream>

using namespace std;

void initialiseGrille(char grille[3][3]);



int main ()
{
	char grille[3][3];
	initialiseGrille(grille);
	return 0;

}

void initialiseGrille(char grille[3][3])
{
	int i,j;
	for (i=1;i<3;i++)
	{
		for (j=1;j<3;j++)
			{
				grille[i][j]='_';
			}
	cout <<endl;
	}
}
