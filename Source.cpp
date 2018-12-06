#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <array>
using namespace std;

enum departement{ Ain, Aisne, Allier, Alpes_de_haute_Provence, Hautes_Alpes, Alpes_Maritimes, Ardeche, Ardennes, Ariege, Aude, Aveyron, Bouches_du_Rhone, Calvados, Cantal, Charente, Charente_Maritime, Cher, Correze, Corse,Cotes_d_Or, Cotes_d_Armor, Creuse, Dordogne, Doubs, Drome, Eure, Eure_et_Loir, Finistere, Gard, Haute_Garonnes, Gers, Gironde, Herault, Ille_et_Vilaine, Indre, Indre_et_Loire, Isere, Jura, Landes, Loir_et_Cher, Loire, Hautes_Loire, Loire_Atlantique, Loiret, Lot, Lot_et_Garonne, Lozere, Maines_et_Loir, Manche, Marne, Haute_Marne, Mayenne, Meurthe_et_Moselle, Meuse, Morbihan, Moselle, Nievre, Nord, Oise, Orne, Pas_de_Calais,Puy_de_Dome,Pyrenees_Atlantiques,Hautes_Pyrenees,Pyrenee_Orientales,Bas_Rhin,Haut_Rhin,Rhone,Haute_Saone,Saone_et_Loire,Sarthe,Savoie,Haute_Savoie,Paris,Seine_Maritime,Seine_et_Marne,Yvelines,Deux_Sevres,Somme,Tarn,Tarn_et_Garonne,Var,Vaucluse,Vendee,Vienne,
	   Haute_Vienne, Vosges,Yonne,Essonne,Haut_de_Seine,Seine_Saint_Denis,Val_de_Marne,Val_d_Oise,Departement };
enum region { Auvergne_Rhone_Alpes, Bourgogne_Franche_Comte, Bretagne, Centre_Val_de_Loire,  Haute_Corse, Grand_Est, Hauts_de_France, Ile_de_France, Normandie, Nouvelle_Aquitaine, Occitanie, Pays_de_la_Loire, Provence_Alpes_Cote_d_Azur, Region };
enum poste_travail{Chef_d_entreprise, Secretaire, Assistant, Agent_d_entretient, Ingenieur, Directeur, Technicien, Developpeur, Vendeur, Poste};
enum secteur_travail{Informatique, Administratif, Communication, Main_d_oeuvre,Secteur};

class Fonct {
public:
	static string convertStringDepartement(departement d) {
		switch (d) {
		case Ain: return "Ain"; break;
		case Aisne: return "Aisne"; break;
		case Allier: return "Allier"; break;
		case Alpes_de_haute_Provence: return "Alpes de haute Provence"; break;
		case Hautes_Alpes: return "Hautes Alpes"; break;
		case Alpes_Maritimes: return "Alpes Maritimes"; break;
		case Ardeche: return "Ardeche"; break;
		case Ardennes: return "Ardennes"; break;
		case Ariege: return "Ariege"; break;
		case Aude: return "Aude"; break;
		case Aveyron: return "Aveyron"; break;
		case Bouches_du_Rhone: return "Bouches du Rhone"; break;
		case Calvados: return "Calvados"; break;
		case Cantal: return "Cantal"; break;
		case Charente: return "Charente"; break;
		case Charente_Maritime: return "Charente Maritime"; break;
		case Cher: return "Cher"; break;
		case Correze: return "Correze"; break;
		case Corse: return "Corse"; break;
		case Cotes_d_Or: return "Cotes d'Or"; break;
		case Cotes_d_Armor: return "Cotes d'Armor"; break;
		case Creuse: return "Creuse"; break;
		case Dordogne: return "Dordogne"; break;
		case Doubs: return "Doubs"; break;
		case Drome: return "Drome"; break;
		case Eure: return "Eure"; break;
		case Eure_et_Loir: return "Eure et Loire"; break;
		case Finistere: return "Finistere"; break;
		case Gard: return "Gard"; break;
		case Haute_Garonnes: return "Haute Garonnes"; break;
		case Gers: return "Gers"; break;
		case Gironde: return "Gironde"; break;
		case  Herault: return " Herault"; break;
		case Ille_et_Vilaine: return "Ille et Vilaine"; break;
		case Indre: return "Indre"; break;
		case Indre_et_Loire: return "Indre et Loire"; break;
		case Isere: return "Isere"; break;
		case Jura: return "Jura"; break;
		case Landes: return "Landes"; break;
		case Loir_et_Cher: return "Loire et Cher"; break;
		case Hautes_Loire: return "Hautes Loire"; break;
		case Loire_Atlantique: return "Loire Atlantique"; break;
		case Loiret: return "Loiret"; break;
		case Lot: return "Lot"; break;
		case Lot_et_Garonne: return "Lot et Garonne"; break;
		case Lozere: return "Lozere"; break;
		case Maines_et_Loir: return "Maines et Loire"; break;
		case Manche: return "Manche"; break;
		case Marne: return "Marne"; break;
		case Haute_Marne: return "Haute Marne"; break;
		case Mayenne: return "Mayenne"; break;
		case Meurthe_et_Moselle: return "Meurthe et Moselle"; break;
		case Meuse: return "Meuse"; break;
		case Morbihan: return "Morbihan"; break;
		case Moselle: return "Moselle"; break;
		case Nievre: return "Nievre"; break;
		case Nord: return "Nord"; break;
		case Oise: return "Oise"; break;
		case Orne: return "Orne"; break;
		case Pas_de_Calais: return "Pas de Calais"; break;
		case Puy_de_Dome: return "Puy de Dome"; break;
		case Pyrenees_Atlantiques: return "Pyrenees Atlantiques"; break;
		case Hautes_Pyrenees: return "Hautes Pyrenees"; break;
		case Pyrenee_Orientales: return "Pyrenee Orientales"; break;
		case Bas_Rhin: return "Bas Rhin"; break;
		case Haut_Rhin: return "Haut Rhin"; break;
		case Rhone: return "Rhone"; break;
		case Haute_Saone: return "Haute Saone"; break;
		case Saone_et_Loire: return "Saone et Loire"; break;
		case Sarthe: return "Sarthe"; break;
		case Savoie: return "Savoie"; break;
		case Haute_Savoie: return "Haute Savoie"; break;
		case Paris: return "Savoie"; break;
		case Seine_Maritime: return "Seine Maritime"; break;
		case Seine_et_Marne: return "Seine et Marne"; break;
		case Yvelines: return "Yvelines"; break;
		case Deux_Sevres: return "Deux Sevres"; break;
		case Somme: return "Somme"; break;
		case Tarn: return "Tarn"; break;
		case Tarn_et_Garonne: return "Tarn et Garonne"; break;
		case Var: return "Var"; break;
		case Vaucluse: return "Vaucluse"; break;
		case Vendee: return "Vendee"; break;
		case Vienne: return "Vienne"; break;
		case Haute_Vienne: return "Haute Vienne"; break;
		case Vosges: return "Vosges"; break;
		case Yonne: return "Yonne"; break;
		case Haut_de_Seine: return "Haut de Seine"; break;
		case Essonne: return "Essonne"; break;
		case Seine_Saint_Denis: return "Seine_Saint_Denis"; break;
		case Val_de_Marne: return "Val de Marne"; break;
		case Val_d_Oise: return "Val d'Oise"; break;
		case Departement: return "Departement"; break;
		default:
			break;
		}
	}
		static string convertStringRegion(region d) {
			switch (d) {
			case Auvergne_Rhone_Alpes: return "Auvergne Rhone Alpes"; break;
			case Bourgogne_Franche_Comte: return "Bourgogne Franche Comte"; break;
			case Bretagne: return "Bretagne"; break;
			case Centre_Val_de_Loire: return "Centre Val de Loire"; break;
			case Haute_Corse: return "Haute Corse"; break;
			case Grand_Est: return "Grand Est"; break;
			case Hauts_de_France: return "Hauts de France"; break;
			case Ile_de_France: return "Ile de France"; break;
			case Normandie: return "Normandie"; break;
			case Nouvelle_Aquitaine: return "Nouvelle Aquitaine"; break;
			case Occitanie: return "Occitanie"; break;
			case Pays_de_la_Loire: return "Pays de la Loire"; break;
			case Provence_Alpes_Cote_d_Azur: return "Provence Alpes Cote d'Azur"; break;
			case Region: return "Region"; break;
			default:
				break;
			}
		}
		static string convertStringPoste(poste_travail d) {
			switch (d) {
			case Chef_d_entreprise: return "Chef d'entreprise"; break;
			case Secretaire: return "Secretaire"; break;
			case Assistant: return "Assistant"; break;
			case Agent_d_entretient: return "Agent_d_entretient"; break;
			case Ingenieur: return "Ingenieur"; break;
			case Directeur: return "Directeur"; break;
			case Technicien: return "Technicien"; break;
			case Developpeur: return "Developpeur"; break;
			case Vendeur: return "Vendeur"; break;
			case Poste: return "Poste"; break;
			default:
				break;
			}
		}
		static string convertStringSecteur(secteur_travail d) {
			switch (d) {
			case Informatique: return "Informatique"; break;
			case Administratif: return "Administratif"; break;
			case Communication: return "Communication"; break;
			case Main_d_oeuvre: return "Main d'oeuvre"; break;
			case Secteur: return "Secteur"; break;
			default:
				break;
			}
		}
};
class Ville {
	string nom;
	departement d;
	region r;
public:
	Ville() {}
	void init(string nom, departement d, region r);
	string getNom();
	departement getDepartement();
	region getRegion();
	void setNom(string nom);
	void setDepartement(departement d);
	void setRegion(region r);
	void affiche();
};
// Personne
class Personne {
	string nom, prenom;
	int age;
	poste_travail p;
	string mission;
public:
	Personne();
	void init(string nom, string prenom, int age, poste_travail p, string mission);
	void affiche();
	string getNom();
	string getPrenom();
	int getAge();
	string getMission();
	poste_travail getPoste();
};
//Groupe
class Groupe {
	string nom;
	Personne gerant;
	Ville siege;
public:
	Groupe();
	void init(string nom);
	void affiche();
	void setGerant(Personne t);
	void setSiege(Ville s);
	string getNom();
};
class Entreprise {
	string nom;
	Groupe h;
	Personne responsable;
	Ville v;
public:
	Entreprise() {}
	Ville getVille();
	Personne getResponsable();
	string getNom();
	Groupe getGroupe();
	void setVille(Ville v);
	void setResponsable(Personne responsable);
	void setNom(string nom);
	void setGroupe(Groupe h);
	void init(string nom, Groupe h, Personne responsable, Ville v);
	void affiche();
};
Personne::Personne():nom(""),prenom(""),age(0),p(Poste),mission(""){}
void Personne::init(string nom, string prenom, int age, poste_travail p, string mission) {
	this->nom = nom;
	this->prenom = prenom;
	this->age = age;
	this->p = p;
	this->mission = mission;
}
void Personne::affiche() {
	cout << "Fiche personne de: " << prenom << " " << nom << endl;
	cout << "Age: " << age << endl;
	cout << "Poste de travail :" << Fonct::convertStringPoste(p) << endl;
	cout << "Mission: " << mission << endl;
	cout << "----------------" << endl;
}
string Personne::getNom() {
	return nom;
}
string Personne::getPrenom() {
	return prenom;
}
int Personne::getAge() {
	return age;
}
poste_travail Personne::getPoste() {
	return p;
}
string Personne::getMission() {
	return mission;
}

Groupe::Groupe() :nom("") {}
void Groupe::setGerant(Personne t) {
	this->gerant = t;
}
void Groupe::init(string nom) {
	this->nom = nom;
}
void Groupe::setSiege(Ville s) {
	siege = s;
}
string Groupe::getNom() {
	return nom;
}
void Groupe::affiche() {
	cout << "Fiche groupe de: " << nom << endl;
	cout << "Gérant: " << gerant.getPrenom()<<" "<<gerant.getNom() << endl;
	cout << "Siège social: " << siege.getNom() <<""<<endl;
	cout << "----------------" << endl;
}
//Ville::Ville() :nom(""){}
void Ville::init(string nom,departement d, region r) {
	this->nom = nom;
	this->d = d;
	this->r = r;
}
string Ville::getNom() {
	return this->nom;
}
departement Ville::getDepartement() {
	return this->d;
}
region Ville::getRegion() {
	return this->r;
}
void Ville::setNom(string nom) {
	this->nom = nom;
}
void Ville::setDepartement(departement d) {
	this->d = d;
}
void Ville::setRegion(region r) {
	this->r = r;
}
void Ville::affiche() {
	cout << "Fiche ville de: " << nom  << endl;
	cout << "Region: " << Fonct::convertStringRegion(r) << endl;
	cout << "Departement :" << Fonct::convertStringDepartement(d) << endl;
	cout << "----------------" << endl;
}
//Entreprise::Entreprise():nom(""){}
void Entreprise::init(string nom, Groupe h, Personne responsable, Ville v) {
	this->nom = nom;
	this->h = h;
	this->responsable = responsable;
	this->v = v;
}
void Entreprise::setGroupe(Groupe h){
	this->h = h;
}
void Entreprise::setNom(string nom) {
	this->nom = nom;
}
void Entreprise::setResponsable(Personne responsable) {
	this->responsable = responsable;
}
void Entreprise::setVille(Ville v) {
	this->v = v;
}
Ville Entreprise::getVille() {
	return v;
}
Groupe Entreprise::getGroupe() {
	return h;
}
Personne Entreprise::getResponsable() {
	return responsable;
}
string Entreprise::getNom() {
	return nom;
}
void Entreprise::affiche() {
	cout << "Fiche entreprise: " << endl;
	cout << "Nom: " << nom << endl;
	cout << "Groupe: " <<h.getNom()<< endl;
	cout << "Responsable: " <<responsable.getPrenom() << " "<< responsable.getNom()<< endl;
	cout << "Ville: " << v.getNom() << endl;
	cout << "----------------" << endl; 
}
int main() {
	cout << "Programme de modélisation du groupe Peugeot:" << endl;
	Personne e;
	e.init("Gratadeix", "Lilian", 18, Developpeur,"Dev appli c++");
	e.affiche();
	Ville v;
	v.init("Nevers", Nievre, Bourgogne_Franche_Comte);
	v.affiche();
	Groupe c;
	c.init("Peugeot");
	c.setGerant(e);
	c.setSiege(v);
	c.affiche();
	Entreprise f;
	f.init("Catar Nevers", c, e, v);
	f.affiche();
	system("PAUSE");
	return 0;
}
