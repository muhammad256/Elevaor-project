#include "Elevators.h"

#include "Clients.h"


Elevators::Elevators()
{
	level = 2;
	ISclosed = true;
	distination = level;
}

void Elevators::nextlevel()
{
	if (!ISclosed) {
		ISclosed = true;
	}
	else {
		if (IS_goingup)
		{
			level= level + 1;
		}
		else {
			level = level - 1;
		}
	}
}

void Elevators::getdist(Clients c)
{
	if (level == c.level) {
		distination = c.dist;
	}
	else {
		distination = c.level;
	}
}

