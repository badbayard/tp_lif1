#include <iostream>

using namespace std;

const int CHMAX=100;
int chlongueur (char mot[CHMAX]);
void chmiroir (char mot[CHMAX],char m[CHMAX]);
void chconcat (char ch1[CHMAX],char ch2[CHMAX]);
bool chcompare (char ch1[CHMAX],char ch2[CHMAX]);
bool chestpalindrome(char m[CHMAX]);


int main(void)
{
    char txt[CHMAX];
    char r[CHMAX];
    char a[CHMAX];
    cin >> txt;
    //cin >> a;
    //cout << txt << endl;
    //cout << chlongueur(txt)<< endl;
    //chmiroir(txt,r);
    //cout << r << endl;
    //chconcat(txt, a);
    //cout << txt;
    //cout<< chcompare(txt, a);
    cout<<chestpalindrome(txt);
    return 0;
}

int chlongueur (char mot[CHMAX])
{
    int i;
    i=0;
    while (mot[i]!='\0')
    {
        i=i+1;
    }
return i;
}

void chmiroir (char mot[CHMAX],char m[CHMAX])
{
int i;
    for(i=0;i<=chlongueur(mot)-1;i++)
    {
        m[i]=mot[chlongueur(mot)-1-i];
    }
     m[chlongueur (mot)]='\0';
}

void chconcat (char ch1[CHMAX],char ch2[CHMAX])
{
    int i, l1, l2;
    i = 0;
    l1 = chlongueur(ch1);
    l2 = chlongueur(ch2);

    for(i=0;i<=l2;i++)
    {
        ch1[l1+i]=ch2[i];
    }

}

bool chcompare (char ch1[CHMAX],char ch2[CHMAX])
{
    int i, l1;
    bool juste;
    juste=true;
    i = 0;
    l1 = chlongueur(ch1);


    for (i = 0; i<= l1 ; i++)
    {
        if((ch1[i]!=ch2[i]))
        {
            return !juste;
        }
    }
    return juste;
}

bool chestpalindrome(char m[CHMAX])
{
    char a[CHMAX];
    chmiroir(m, a);
    return (chcompare(m, a));
}


