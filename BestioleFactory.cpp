#include "BestioleFactory.h"

#include "Milieu.h"

#include <cstdlib>
#include <cmath>

BestioleFactory* BestioleFactory::CreateFactory( BESTIOLE_FACTORIES factory)
{
	if(factory== BESTIOLE_FACTORIES::GREGAIRE){
		return new GregaireFactory();
	}
	else if(factory== BESTIOLE_FACTORIES::PEUREUSE){
		return new PeureuseFactory();
	}
	else if(factory== BESTIOLE_FACTORIES::SCHIZOPHRENE){
		return new SchizophreneFactory();
	}
}

