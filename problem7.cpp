#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream MyFile("../log.txt",ios:: app | ios::in | ios::out);
    int x;cin>>x;
    MyFile<<"  "<<x<<endl;



    MyFile.close();
    return 0;
}
