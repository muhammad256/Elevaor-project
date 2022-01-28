
#include "Clients.h"


void  Clients::ISUP()
{
	IS_goingup = (request[3] = 'U') ?  true : false;

}

void  Clients::getlevel()
{
	if (request[0] == 'G') {
		level = 2;
	}
	else if (request[0] == 'B')
	{
		if (request[1] == '1') level = 1;
		if (request[1]== '2') level = 0;
	}
	else {
		if (request[1] == '1') level = 3;
		if (request[1] == '2') level = 4;
		if (request[1] == '3') level = 5;
		if (request[1] == '4') level = 6;
		if (request[1] == '5') level = 7;
		if (request[1] == '6') level = 8;
		if (request[1] == '7') level = 9;

	}
}

void Clients::getdist()
{
	if (request[5] == 'G') {
		level = 2;
	}
	else if (request[5] == 'B')
	{
		if (request[6] == '1') dist = 1;
		if (request[6] == '2') dist = 0;
	}
	else {
		if (request[6] == '1') dist = 3;
		if (request[6] == '2') dist = 4;
		if (request[6] == '3') dist = 5;
		if (request[6] == '4') dist = 6;
		if (request[6] == '5') dist = 7;
		if (request[6] == '6') dist = 8;
		if (request[6] == '7') dist = 9;

	}
}

Clients::Clients()
{
}



