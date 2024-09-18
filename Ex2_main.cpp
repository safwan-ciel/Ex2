#include "Ex1.hpp"
#include "Ex1.cpp"
#include <iostream>


int main(int argc, char const *argv[])
{
    Voiture ma_voiture("Audi", "A3", "Diesel", "Auto", 100000, 30);     
    //Instanciation d'un objet de la classe Voiture avec 5 attributs car l'attribut moteur est déjà initialisé

    //Appel des fonctions 
    ma_voiture.Afficher_voiture();
    ma_voiture.Allumer_moteur(); 
    ma_voiture.Afficher_voiture(); 
    ma_voiture.Rouler(300);
    ma_voiture.Afficher_voiture();
    
    return 0;
}
