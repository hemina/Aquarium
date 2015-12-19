#include "PeureuseFactory.h"

#include "Milieu.h"

#include <cstdlib>
#include <cmath>

Bestiole* PeureuseFactory::GetBestiole()
{
	return new BestiolePeureuse();
}

