void drawtab(int x, bool isx, int y, bool isy, int z, bool isz) {
     cout << "\n";
	string thefloor[10] = { "F7", "F6", "F5", "F4", "F3", "F2", "F1", "G ", "B1", "B2" };
	for (int i = 0; i < 10; i++) {
		cout << thefloor[i] << ":   |";
		if (x == i) {
			if (isx == 1) {
				cout << "00";
			}
			else {
				cout << "__";
			}
		}
		else {
			cout << "  ";
		}
		cout << "    |";
		///////////////////////////
		if (y == i) {
			if (isy == 1) {
				cout << "00";
			}
			else {
				cout << "__";
			}
		}
		else {
			cout << "  ";
		}
		/////////////////
		cout << "    |";
		if (z == i) {
			if (isz == 1) {
				cout << "00";
			}
			else {
				cout << "__";
			}
		}
		else {
			cout << "  ";
		}

		cout << "\n";
	}
}
