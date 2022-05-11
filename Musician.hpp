/*
-----------------------------------------------------------------------------------
Nom du fichier  : Musician.hpp
Auteur(s)       : lucac
Date creation   : 11.05.2022
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------

*/

#ifndef SMARTPOINTEREX_MUSICIAN_HPP
#define SMARTPOINTEREX_MUSICIAN_HPP

#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
class Band;
#include "Band.hpp"

using namespace std;

class Musician {
   string name;
public:
   const string &getName() const;

private:
   weak_ptr<Band> band;
public:
   const weak_ptr<Band> &getBand() const;

public:
   explicit Musician(string name);
   ~Musician();

   void addToBand(shared_ptr<Band> band);

   string toString() const;
};




#endif //SMARTPOINTEREX_MUSICIAN_HPP
