#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    system("cls");
    string input;
    cout<< "Masukkan kata atau kalimat untuk diperiksa:" << endl;
    getline(cin, input);

    string clean_str = "";
    for (char c : input) {
        if (isalnum(c)) {
            clean_str += tolower(c);
        }
    }

    string reversed_str = clean_str;
    reverse(reversed_str.begin(), reversed_str.end());

    cout<< "Hasil untuk '" << input << "': ";
    if (clean_str == reversed_str) {
        cout<< "True" << endl;
    } else {
        cout<< "False" << endl;
    }

    return 0;
}








