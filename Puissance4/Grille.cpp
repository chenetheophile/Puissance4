#include "Grille.h"

Grille::Grille() {
	for (int i = 0; i < 6; i++) {
		vector<int> vect(7, -1);
		occuper.push_back(vect);
	}
}
int Grille::getLargeur() {
	return this->largeur;
};
int Grille::getHauteur() {
	return this->hauteur;
}
int Grille::isOccupied(int colonne, int ligne) {
	return this->occuper.at(ligne).at(colonne);
}
int Grille::ajouterPion(int colonne, int color) {
	for (int i = 0; i < 6; i++) {
		if (isOccupied(colonne, i) == -1) {
			occuper.at(i).at(colonne) = color;
			return Grille::checkWin(colonne, i, color);
		}
	}
	return -1;
}
bool Grille::checkWin(int colonne, int ligne, int color) {
	//Horizontal

	//vertical


	//Diagonale Gauche



	//Diagonale Droite

	return false;
}
void Grille::afficherGrille() {
	for (int ligne = 5; ligne >= 0; ligne--) {
		for (int colonne = 0; colonne < 7; colonne++)
		{
			cout << isOccupied(colonne, ligne) << " ";
		}
		cout << endl << endl;
	}
}