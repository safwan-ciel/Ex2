#ifndef DEF_EX1
#define DEF_EX1
#include <string>           //Inclusion de la bibliothèque string


class Voiture
{
private:                        //Déclaration des attributs privés qui comprend 4 de type string, 1 de type booléen et un de type int
    std::string marque;
    std::string modele;
    std::string carburant;
    std::string boite_vitesse;
    bool moteur;
    int Kilo_metrage; 
    float Niv_Carburant;

public:                                 //Définitions des méthodes publiques     

    Voiture(const std::string& a, const std::string& b, const std::string& c, const std::string& d, int g,  int h, bool e = false);    
    //Définition du constructeur qui prend en compte 6 paramètres/ Le paramètre "e" qui correpsond à l'attribut moteur est initialisé par défaut en tant que false 

    void Afficher_voiture();
    void Allumer_moteur();
    void Eteindre_moteur();
    bool Etat_moteur();
    int Rouler(int);
    float Consom_carburant(float dist);
    float Estim_distance();

};
#endif




