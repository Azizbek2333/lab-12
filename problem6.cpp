#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream MyFile("../source.txt");
    ofstream MyFile2("../copy.txt");
    string a;
    cin>>a;
    MyFile<<a<<" ";
    MyFile2<<a<<" ";





    MyFile.close();
    MyFile2.close();
    return 0;
}
