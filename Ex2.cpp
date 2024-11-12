#include "Ex1.hpp"
#include <iostream>
#include <string>

//test de git

Voiture::Voiture(const std::string& a, const std::string& b, const std::string& c, const std::string& d, int g, int h, bool e ) 
//Le & permet de passer des références à string ce qui permet de rendre visible les changements opérés sur les paramètres d'entrées //

{                   //Assignation des paramètres d'entrées aux attributs de la classe
    moteur = e;
    marque = a;
    modele = b;
    carburant = c;
    boite_vitesse = d;
    Kilo_metrage = g;
    Niv_Carburant = h;
}

    void Voiture::Afficher_voiture()
    {
        std::string etat_moteur = Etat_moteur() ? "allumé" : "éteint";  //Si le moteur est "true" alors il est "allumé" sinon il est "éteint"
        
        //Affichage des caractéristiques de la voiture
        std::cout << "--------Voiture--------" << std::endl;
            std::cout << "Marque : " << marque << std::endl;
                std::cout << "Modèle : " << modele << std::endl;
                    std::cout << "Type de carburant : " << carburant << std::endl;
                        std::cout << "Boite de vitesse : " << boite_vitesse << std::endl;
                    std::cout << "Kilométrage : " << Kilo_metrage << std::endl;
                std::cout << "Etat du moteur : " << Etat_moteur() << std::endl;
            std::cout << "Niveau de carburant : " << Niv_Carburant << std::endl;
        std::cout << "La distance estimée : " << etat_moteur << std::endl;
    }

        bool Voiture::Etat_moteur()
        {
            return moteur;  
        }


            void Voiture::Allumer_moteur()
            {
                if (!moteur)        //Si le moteur est éteint 
                {
                    moteur = true;      //Alors on allume le moteur
                };
            }



                void Voiture::Eteindre_moteur()
                {
                    if (moteur)             //Si le moteur est allumé 
                    {
                        moteur = false;         //Alors on éteint le moteur
                    };
                }


                    int Voiture::Rouler(int distance)
                    {
                        if (moteur)     //SI le moteur est allumé 
                        {
                            Kilo_metrage += distance ;                      //Alors on rajoute la distance parcourue au kilomètrage de la voiture
                            Niv_Carburant -= (distance * 4.8) / 100;            //Actualisation du niveau de carburant
                            return Kilo_metrage;
                        }
                            else
                            {
                                std::cout << "Le moteur doit être allumé" << std::endl;     //Sinon on avertit l'utilisateur qu'il faut allumer le moteur 
                                return 0;
                            } 
                    }


                        float Voiture::Consom_carburant(float dist)         //Calcul de la consommation de carburant 
                        {
                            return (dist * 4.8) / 100; 
                        }


                            float Voiture::Estim_distance()                 //Calcul de l'estimation de la distance 
                            {
                                return (Niv_Carburant * 100) / 4.8;
                            }
