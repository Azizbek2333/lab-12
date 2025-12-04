#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("text.txt");
    string line;
    int lineCount = 0;
    while (getline(file, line)) {
        lineCount++;
    }
    cout << "The file contains " << lineCount << " lines." << endl;
    file.close();
    return 0;
}
