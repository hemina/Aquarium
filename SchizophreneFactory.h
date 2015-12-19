#ifndef _SCHIZOPHRENEFACTORYS_H_
#define _SCHIZOPHRENEFACTORYS_H_


#include "UImg.h"

#include <iostream>

using namespace std;


//class Milieu;


class SchizophreneFactory:public BestioleFactory
{

public :                                           // Forme canonique :
	Bestiole* GetBestiole();
};

#endif
