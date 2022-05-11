#include "Band.hpp"

/*
-----------------------------------------------------------------------------------
Nom du fichier  : Band.cpp
Auteur(s)       : lucac
Date creation   : 11.05.2022
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------

*/
void Band::setMembers(initializer_list<shared_ptr<Musician>> list) {
   for_each(list.begin(), list.end(),[this](const shared_ptr<Musician>& m){
      if(!m->getBand().expired()){
         cout << m->getName() + " est deja dans un groupe" << endl;
         return;
      }
      m->addToBand(shared_from_this());
      musicians.push_back(m);
   });
}

string Band::getName() const {
   return name;
}

string Band::toString() const {
   string result = name + ": ";
   for_each(musicians.begin(), musicians.end(), [this, &result](const
   weak_ptr<Musician>& m){
      auto mu = m.lock();
      result += mu->getName() + " ";
   });
   return result;
}

Band::Band(string name) :name(move(name)){}

Band::~Band() {
   cout << "~Band(): " + name << endl;
}
