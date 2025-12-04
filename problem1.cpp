#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream MyFile("../input.txt");
    int x;
    int sum=0;
    while (MyFile >> x) {
        sum+=x;
    }
    cout << sum << "\t";
    MyFile.close();
    return 0;
}
