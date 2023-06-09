//Kevin Yu
//6-9-23
//Graph Creator

#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

int main() {
	char input[2];
	bool play = true;
	while (play == true) {
		cout << "Add Vertex(AV), Add Edge(AE), Remove Vertex(RV), Remove Edge(RE), Find Path(FP), Quit: ";
		cin >> input;
		cin.get();
		if (strcmp(input, "AV") == 0 ) {
			cout << "av" << endl;
		}
		if (strcmp(input, "Quit") == 0 ) {
			play = false;
		}
	}
}


