#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool check_triples(const string& filename) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        for (int i = 0; i < line.size() - 2; i++) {
            if (line.substr(i, 3) == "OGO" || line.substr(i, 3) == "AGA") {
                return true;
            }
        }
    }
    return false;
}

int main() {
    if (check_triples("t.txt")) {
        cout << "Found OGO or AGA" << endl;
    }
    else {
        cout << "Did not find OGO or AGA" << endl;
    }
    return 0;
}
