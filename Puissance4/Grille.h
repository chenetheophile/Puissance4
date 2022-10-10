#ifndef GRILLE_H
#define GRILLE_H
#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;
class Grille {
public:
	Grille();
	int getLargeur();
	int getHauteur();
	int ajouterPion(int colonne,int color);
	int isOccupied(int colonne, int ligne); 
	bool checkWin(int colonne, int ligne,int color);
	void afficherGrille();
private:
	int largeur = 7;
	int hauteur = 6;
	vector<vector<int>> occuper;
};
#endif // !Grille_H



