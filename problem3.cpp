#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream MyFile("../numbers.txt");
    int x;int max=0;
    while (MyFile >> x) {}
        if (x>max) {
            cout<<x<<endl;
        }
    
    MyFile.close();
    return 0;
}
