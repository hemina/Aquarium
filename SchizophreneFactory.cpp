#include "SchizophreneFactory.h"

#include "Milieu.h"

#include <cstdlib>
#include <cmath>

Bestiole* SchizophreneFactory::GetBestiole()
{
	return new BestioleSchizophrene();
}

