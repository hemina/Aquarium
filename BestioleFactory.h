#ifndef _BESTIOLEFACTORYS_H_
#define _BESTIOLEFACTORYS_H_


#include "UImg.h"

#include <iostream>

using namespace std;


//class Milieu;


class BestioleFactory
{

public :                                           // Forme canonique :
   enum BESTIOLE_FACTORIES
   {
	GREGAIRE,
	PEUREUSE,
	SCHIZOPHRENE
   };

   virtual Bestiole* GetBestiole()=0; 
   static BestioleFactory* CreateFactory(BESTIOLE_FACTORIES factory);

};

#endif
