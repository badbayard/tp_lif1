# include <iostream>

using namespace std;

const int NBETU=1500;
struct date
{
    int jour;
    int mois;
    int annee;

};

struct etudiant
{
    double numero;
    char nom[50];
    char prenom[50];
    struct date date_naissance;
    float note[5];
};

struct gestion
{
    int nb_etu;
    struct etudiant liste_etu[NBETU];
};


struct etudiant cree_etudiant(void)
{
    struct etudiant e;
    int i;
    cout << ("Donne moi la date sous forme de 3 entiers");
    cin >> (e.date_naissance.jour);
    cin >> (e.date_naissance.mois);
    cin >> (e.date_naissance.annee);
    cout <<"mettre le prenom" <<endl;
    cin >> (e.prenom);
    cout << "mettre le nom" <<endl;
    cin >> (e.nom);
    cout <<"mettre le numero"<<endl;
    cin >> (e.numero);
    for( i=0; i<=4 ; i++)
    {
        cout << "donne-moi la "<<i<<"eme note";
        cin >> (e.note[i]);
    }
return e;
}

void affiche_etudiant(struct etudiant e)
{
    int i;
    cout << "numero d'etudiant " << e.numero <<endl;
    cout << "nom " << e.nom <<" / " <<endl;
    cout <<"date de naissance: " <<endl;
    cout << e.date_naissance.jour << "/" << e.date_naissance.mois << "/" << e.date_naissance.annee << endl;
    for ( i=0; i<=4 ; i++)
    {
        cout <<"note" << i <<endl;
        cout << e.note[i] <<endl;
    }
}

int main (void)
{
    struct etudiant etu;
    etu = cree_etudiant();
    affiche_etudiant(etu);
    return 0;
}

