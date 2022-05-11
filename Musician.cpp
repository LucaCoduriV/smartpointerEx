#include "Musician.hpp"

/*
-----------------------------------------------------------------------------------
Nom du fichier  : Musician.cpp
Auteur(s)       : lucac
Date creation   : 11.05.2022
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------

*/

void Musician::addToBand(shared_ptr<Band> band) {
   this->band = band;
}

string Musician::toString() const {
   return name + ", band: " + (band.expired() ? "<none>" : band.lock()->getName());
}

Musician::Musician(string name) :name(move(name)){}

const weak_ptr<Band> &Musician::getBand() const {
   return band;
}

const string &Musician::getName() const {
   return name;
}

Musician::~Musician() {
   cout << "~Musician(): " + name << endl;
}
