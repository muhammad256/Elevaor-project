#include <iostream>
#include <string>
//#include "Elevators.h"
//#include "Clients.h"
#include "Drawtab.h"
using namespace std;

int main()
{
    Drawtab(5, 0, 3, 1, 0, 1);
    /*

	Clients c1, c2, c3, c4;
	Elevators E1, E2, E3;
	cin >> c1.request;
	c1.getdist();
	c1.getlevel();
	c1.ISUP();
	Elevators e[2];
	e[0] = E1;
	e[1] = E2;
	e[2] = E3;
	e[0].getdist(c1);
	bool taken = false;
	for (int i = 0; i < 2; i++) {
		if (abs(e[i].level - c1.level) <= 3 && e[i].distination == e[i].level ) {
			e[i].getdist(c1);
			taken = true;
		}
	}
	if (!taken) {
		for (int i = 0; i < 2; i++) {
			if (e[i].level < c1.level && e[i].IS_goingup  &&  c1.IS_goingup && e[i].distination> c1.level) {
				e[i].getdist(c1);
				taken = true;
				break;
			}
			if (e[i].level > c1.level && !e[i].IS_goingup && !c1.IS_goingup && e[i].distination < c1.level) {
				e[i].getdist(c1);
				taken = true;
				break;
			}
		}
		if (!taken)
		{
			int dist1, dist2, dist3;
			if (abs(e[0].level - c1.level) <= abs(e[1].level - c1.level) && abs(e[0].level - c1.level) <= abs(e[2].level - c1.level)) {
				e[0].getdist(c1);
			}
			else if ((abs(e[1].level - c1.level) <= abs(e[0].level - c1.level) && abs(e[1].level - c1.level) <= abs(e[2].level - c1.level))) {
				e[1].getdist(c1);
			}
			else {
				e[2].getdist(c1);
			}

		}
	}
*/
}
