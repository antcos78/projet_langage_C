#ifndef _OR2_H_
#define _OR2_H_


#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <iomanip>

#include "Porte_2.h"

using namespace std;


class Or2 : public Porte_2 {


public:
  //////constructeur-destructeur///////
  Or2(const string &nom, char type, char nbPorts,bool etat_1 = 0, bool etat_2 = 0, char flag = 0):
  Porte_2(nom,type,nbPorts,etat_1,etat_2,flag)
  {
    cout << "constructeur" << endl;
  }


  ~Or2()
  {
    cout << "destruction" << endl;

  }

  ///////méthodes//////
  bool calculEtat();


};


#endif
