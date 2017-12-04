#include "Preditor.h"
#include "Nest.h"


Preditor::~Preditor()
{
	dynamic_cast<Nest*>(nest)->currentPreditors--;
}
