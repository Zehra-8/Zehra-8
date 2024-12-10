#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void setirSil(int matris[4][4], int &sira, int silinecekSetir) {
    for (int i = silinecekSetir; i < sira - 1; i++) {
        for (int j = 0; j < 4; j++) {
            matris[i][j] = matris[i + 1][j]; 
        }
    }
    sira--; 
}
int main() {
    int sira = 4;
    const int sutun = 4; 
    if (sira <= 0 || sira > 100) {
        cout << "Xəta: Keçərsiz sətir sayı!\n";
        return 1;
    }
    int matris[100][sutun]; 
    srand(time(0));
    for (int i = 0; i < sira; i++) {
        for (int j = 0; j < sutun; j++) {
            matris[i][j] = rand() % 10 + 1; 
        }
    }

    cout << "\nƏvvəlki matris:\n";
    for (int i = 0; i < sira; i++) {
        for (int j = 0; j < sutun; j++) {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    int silinecekSetir=3;

    silinecekSetir--; 
    setirSil(matris, sira, silinecekSetir);
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\nSonrakı matris:\n";
    for (int i = 0; i < sira; i++) {
        for (int j = 0; j < sutun; j++) {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}