#include "GregaireFactory.h"

#include "Milieu.h"

#include <cstdlib>
#include <cmath>

Bestiole* GregaireFactory::GetBestiole()
{
	return new BestioleGregaire();
}

