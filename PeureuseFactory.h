#ifndef _PEUREUSEFACTORYS_H_
#define _PEUREUSEFACTORYS_H_


#include "UImg.h"

#include <iostream>

using namespace std;


//class Milieu;


class PeureuseFactory:public BestioleFactory
{

public :                                           // Forme canonique :
	Bestiole* GetBestiole();
};

#endif
