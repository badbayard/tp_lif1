#include <iostream>
#include <string.h>
using namespace std;

const int CHMAX=100;
int chlongueur(char ch[CHMAX]);
void chmiroir(char ch[CHMAX], char chr[CHMAX]);
void chconcat(char ch1[CHMAX],char ch2[CHMAX]);
bool chcompare(char ch1[CHMAX],char ch2[CHMAX]);

int main ()
{
	char txt[CHMAX];
	char txt2[CHMAX];
	int s;
	cin>>txt;
	cout<<txt;
	chmiroir(txt,txt2);
	//s= chlongueur(txt);
	//cout << s;
	return 0;
}


int chlongueur(char ch[CHMAX])
{
	int i, lg;
	i=0;
	lg=0;
	while (ch[i]!='\0')
	{
		lg=lg+1;
		i=i+1;
	}
	return lg;
}

void chmiroir(char ch[CHMAX], char chr[CHMAX])
{
	int i, lg;
	lg=strlen(ch);
	i=0;
	while (ch[i]!='\0')
	{
		chr[lg-i-1]=ch[i];
		i=i+1;
	}
	chr[lg]='\0';
}

void chconcat(char ch1[CHMAX],char ch2[CHMAX])
{
	int i,j;
	i=0;
	j=0;
	while (ch1[i]='\0')
	{
		while (ch2[j]='\0')
		{
			cout<<ch1[i]<<ch2[j];
			i=i+1;
			j=j+1;
		}
	}
}

bool chcompare(char ch1[CHMAX],char ch2[CHMAX])
{
	int i,j;
	i=0;
	j=0;
	while (ch1[i]!='\0')
	{
		while (ch2[j]!='\0')
		{
			if (ch1[i]==ch2[j])
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

/*void chestpalindrome(char ch1[CHMAX],char ch2[CHMAX])
{
	int s;
	 s=chcompare (chmiroir(ch1,ch2))
	cout <<s;
	
}
*/


int occurence(char ch[CHMAX], char a)
{
	int i,nbc;
	i=0;
	while (ch[i]!='\0')
	{
		if (ch[i]=a)
		{
			nbc=nbc+1;
		}
	i=i+1;
	}
	return nbc;
}

bool testmajuscule(char ch[CHMAX])
{
	int i;
	i=0;
	while (ch[i]!='\0')
	{
		if ((ch[i]>='A')&&(ch[i]<='B'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}   
}


void min2maj(char ch1[CHMAX],char ch2[CHMAX])
{
	int i, lg;
	lg=strlen(ch1);
	for (i=0;i<=lg-1;i++)
	{
		if ((ch1[i]>='a')&&(ch1[i]<='b'))
		{
			ch2[i]=ch1[i]-'a'+'A';
		}
		else
		{
			ch2[i]=ch1[i];
		}
	}
	ch2[strlen(ch1)]='\0';
}

void voyelle(char mot[CHMAX], char voy[CHMAX])
{
	int ind_moy, ind_voy, lg,i;
	ind_voy=0;
	lg=strlen(mot);
	for (ind_moy=0;i<=lg-1;i++)
	{
		if ((mot[i]!='a')&&(mot[i]!='e')&&(mot[i]!='i')&&(mot[i]!='o')&&(mot[i]!='u')&&(mot[i]!='y'))
		{
			voy[ind_voy]=mot[ind_moy];
			ind_voy=ind_voy+1;
		}
	}
voy[ind_voy]='\0';
}
		
