/*
-----------------------------------------------------------------------------------
Nom du fichier  : Band.hpp
Auteur(s)       : lucac
Date creation   : 11.05.2022
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------

*/

#ifndef SMARTPOINTEREX_BAND_HPP
#define SMARTPOINTEREX_BAND_HPP

#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
class Musician;
#include "Musician.hpp"

using namespace std;

class Band : public enable_shared_from_this<Band>{
   string name;
   vector<weak_ptr<Musician>> musicians;
public:
   explicit Band(string name);

   ~Band();

   void setMembers(initializer_list<shared_ptr<Musician>> list);

   string getName()const;

   string toString() const;
};



#endif //SMARTPOINTEREX_BAND_HPP
