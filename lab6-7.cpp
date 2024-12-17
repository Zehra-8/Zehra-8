#include <iostream>
using namespace std;

int main() {

    char elements[3] = {'a', 'b', 'c'};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == i)  
			continue;
            for (int k = 0; k < 3; ++k) {
                if (k == i || k == j) 
				
				continue;
               
               cout<< elements[i] << " " << elements[j] << " " << elements[k] <<endl;
               cout<<"------------------\n";
            }
        }
    }

    return 0;
}