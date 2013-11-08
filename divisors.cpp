/*********************************************
 *                                           *
 *  This program finds the divisors of a     *
 *  number entered by the user.              *
 *                                           *
 *  Copyright Maria Valentina Carlucci 2013  *
 *                                           *
 *********************************************/

#include <iostream>
using namespace std;

int main() {
    
    unsigned int ent_num;
    unsigned int div[100];
    
    cout << "Enter an integer beween 1 and 1 billion: ";
    cin >> ent_num;
    
    int i = 0;
    for (int test_div = 2; test_div <= ent_num/2; test_div++) {
        if (ent_num%test_div == 0) {
            div[i] = test_div;
            i++;
        }
    }
    
    switch (i) {
        case 0:
            cout << "The number is prime.";
            break;            
        default:
            cout << "The number is divisible by: ";
            for (int j = 0; j < i; j++) {
                cout << div[j] << " - ";
            }
            break;
    }
    cout << endl;
    return 0;
}

