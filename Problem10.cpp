#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("text.txt");

    int count = 0;
    char ch;
    while (file.get(ch)) {
        count++;
    }

    cout << count;
  return 0;
}
