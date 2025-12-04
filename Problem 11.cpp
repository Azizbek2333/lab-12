#include <fstream>
using namespace std;

int main() {
    ofstream file("report.txt");
    file << "File handling in C++ is easy!";
    file.close();
    return 0;
}
