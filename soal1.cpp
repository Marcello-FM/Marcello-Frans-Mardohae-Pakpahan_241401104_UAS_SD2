#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void penyelesaian() {
    int x, n;
    cin>> x >> n;
    if (n % 2 == 0) {
        cout<< 0 <<endl;
    } else {
        cout<< x <<endl;
    }
}

int main (){
    system ( "cls");
    int t;
    cin>> t;
    while (t--){
        penyelesaian();
    }
    return 0;
}

