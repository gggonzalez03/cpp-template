#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	if (argc > 1) {
        cout << "Printing arguments: ";
        for (int i = 1; i < argc; i++) {
            cout << argv[i] << ", ";
        }
        cout << endl;
	}
	else {
		cout << "No arguments found.";
	}

	return 0;
}
