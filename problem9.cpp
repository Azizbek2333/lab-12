#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("input.txt");
    int x;
    while (file>>x) {
    }
    ofstream even("even.txt");
    if (x%2==0) {
        even<<x<<endl;
    }
    even.close();
    file.close();
    return 0;
}
