#include <iostream>
using namespace std;

void arrayInput(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nElementi daxil edin:";
        cin >> a[i];
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
}

int main() {
    int a[8]; 

    arrayInput(a, 8);

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) { 
            if (a[i] == a[j]) { 
                cout << a[i] << "-" << a[j] << endl;
                break;
            }
        }
    }

    return 0;
}