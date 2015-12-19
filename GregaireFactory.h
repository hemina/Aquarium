#ifndef _GREGAIREFACTORYS_H_
#define _GREGAIREFACTORYS_H_


#include "UImg.h"

#include <iostream>

using namespace std;


//class Milieu;


class GregaireFactory:public BestioleFactory
{

public :                                           // Forme canonique :
	Bestiole* GetBestiole();
};

#endif
