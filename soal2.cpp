#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    system ("cls");
    int n;
    cin>> n;

    vector<string> express_n;
    vector<string> reguler_n;
    int total_waktu = 0;

    for (int i = 0; i < n; i++) {
        string nama, jenis;
        int berat;
        cin>> nama >> berat >> jenis;

        if (jenis == "express") {
            express_n.push_back(nama);
            total_waktu += (berat * 5);
        } else {
            reguler_n.push_back(nama);
            total_waktu += (berat * 10);
        }
    }

    cout<< "Urutan: ";
    bool first = true;
    for (const string& nama : express_n) {
        if (!first) cout<< " ";
        cout<< nama;
        first = false;
    }
    for (const string& nama : reguler_n) {
        if (!first) cout<< " ";
        cout<< nama;
        first = false;
    }
    cout<< endl;

    cout<< "total waktu: " << total_waktu << " menit" << endl;
    return 0;
}
