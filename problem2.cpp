#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream MyFile("../message.txt");
    string a;
    cin>>a;
    MyFile<<a ;
    MyFile.close();
    return 0;
}
