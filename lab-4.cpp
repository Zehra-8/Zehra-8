#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int rows, cols;
      cout<<"sütun və sətrin sayı: \n";
    cin >> rows >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    srand(time(0));

    
    int ones = 0; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 2;
            if (matrix[i][j] == 1) {
                ones++;
            }
        }
    }
    
        
    cout << "Massivin elementleri:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int cehd=10;
    cout<<"cehd sayı:"<<cehd<<endl;
    for(int i=0; i<cehd; i++){
    int rowIndex, colIndex;
    cout << "Yoxlanilacaq sətir indeksini daxil edin (0-dan " << rows - 1 << " arası): ";
    cin >> rowIndex;
    cout << "Yoxlanilacaq sütun indeksini daxil edin (0-dan " << cols - 1 << " arası): ";
    cin >> colIndex;

    
    if (rowIndex >= 0 && rowIndex < rows && colIndex >= 0 && colIndex < cols) {
        if (matrix[rowIndex][colIndex] == 1) {
            ones--; 
            cout << "Massivin [" << rowIndex << "][" << colIndex << "] elementinin dəyəri 1-dir." << endl;
            cout<<"Qalan cehdlerin sayı: "<<cehd-- << endl;
        } else {
            cout << "Massivin [" << rowIndex << "][" << colIndex << "] elementinin dəyəri 0-dir." << endl;
            
        }
        cout << "Qalan 1-lərin sayı: " << ones << endl; 
        cout<<"Qalan cehdlerin sayı: "<<cehd-- << endl;
    } else {
        cout << "Daxil etdiyiniz indekslər səhvdir!" << endl;
    }
}
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}