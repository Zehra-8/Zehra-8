#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int aralıqsayı;
    cout << "Neçə aralıq daxil edəcəksiniz? ";
    cin >> aralıqsayı;

    for (int r = 1; r <= aralıqsayı; r++) {
        int start, end;
        cout << r << "-ci aralığın başlanğıcını daxil edin: ";
        cin >> start;
        cout << r << "-ci aralığın sonunu daxil edin: ";
        cin >> end;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~\n";

        int count = 0;
        cout << "Kvadrat ədədlər: ";

        for (int i = ceil(sqrt(start)); i <= floor(sqrt(end)); i++) {
            int square = i * i;
            cout << square << " ";
            count++;
        }

        cout << endl << "Cəmi kvadrat ədədlərin sayı: " << count << endl;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~\n";
        
    }

    return 0;
}