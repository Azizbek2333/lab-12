#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    int x;
    int cnt = 0;

    while (file >> x) {
        if (x < 0) cnt++;
    }

    file.close();
    cout << cnt;

    return 0;
}
