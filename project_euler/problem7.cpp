/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number? */

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int j = 1;

    while (i <= 100) {
        while (j <= 6) {
            if (i % j == 0){
                cout << i << " ";
            }
            j = j + 1;
        }
        i = i + 1;
    }
}