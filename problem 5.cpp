#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream MyFile("../b.txt");
    ifstream MyFile2("../a.txt");
    int x;int b;
    while (MyFile>>x) {
        cout<<x<<" ";
    }
    cout<<endl;
    while (MyFile2>>b){
    cout<<b<<" ";
}

    MyFile.close();
    MyFile2.close();
    return 0;
}
