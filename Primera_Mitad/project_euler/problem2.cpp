/* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.*/

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int c = 0;
    int sum = 0;

    while (a < 4000000) {
        a = b + c;
        c = b;
        b = a;      
        if (a % 2 == 0) {
        sum = sum + a;
        }
        cout << a << " ";
    }
    cout << "\nLa suma es: " << sum;
    return 0;
}