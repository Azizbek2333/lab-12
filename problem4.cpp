#include <iostream>
#include <fstream>
using namespace std;
int main() {

    ofstream MyFile("../count.txt");
    int x;
    cin>>x;
       for ( int i=1;i<=x;i++) {
           MyFile<<i<<" ";

       }


    MyFile.close();
    return 0;
}
