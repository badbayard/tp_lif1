#include <iostream>
#include <math.h>

using namespace std;


struct polynome
{
	float a, b, c;
	float delta;
	int nb_racine;
	double rac1, rac2;
};

struct polynome saisie_des_coefficients ();
void calcul_delta(struct polynome &p);
void calcul_des_racines(struct polynome &p);
void affiche(struct polynome &p);

int main ()
{
	struct polynome poly;
	poly=saisie_des_coefficients ();
	calcul_delta(poly);
	calcul_des_racines(poly);
	affiche(poly);
	return 0;
}





struct polynome saisie_des_coefficients ()
{	
	struct polynome p;
	cout <<"donnez a"<<endl;
	cin >>p.a;
	cout <<"donnez b"<<endl;
	cin >>p.b;
	cout <<"donnez c"<<endl;
	cin >>p.c;
	return p; //on retourne la structure car elle est vide au depart
}

void calcul_delta(struct polynome &p)
{
	p.delta=(p.b*p.b)-4*p.a*p.c;
}

void calcul_des_racines(struct polynome &p)
{
	if(p.delta==0)
	{
		p.rac1=-p.b/(2*p.a);
		p.rac2=-p.b/(2*p.a);
		p.nb_racine=1;
	}
	else
	{
		if (p.delta>0)
		{
			p.rac1= (-p.b-sqrt(p.delta))/(2*p.a);
			p.rac2= (-p.b+sqrt(p.delta))/(2*p.a);
			p.nb_racine=2;
		}
		else
		{
		p.nb_racine=0;
		}
	}
}

void affiche(struct polynome &p)
{
	cout <<"le delta est : "<<" "<<p.delta;
	cout <<"le nombre de racine sont de :"<<" "<<p.nb_racine;	
	cout<<"les racines sont: "<<p.rac1<<" "<<p.rac2<<endl;

}




	