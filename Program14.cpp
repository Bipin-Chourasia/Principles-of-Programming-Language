//Write a c++ program to implement tower of Hanoi.

//Source Code:-

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char frod, char trod, char arod) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, frod, arod, trod);
    cout << "Move disk:" << n << " from rod:" << frod << " to rod:" << trod << endl;
    towerOfHanoi(n - 1, arod, trod, frod);
}

int main() {
    int n=3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

/*OUTPUT:-
Move disk:1 from rod:A to rod:C
Move disk:2 from rod:A to rod:B
Move disk:1 from rod:C to rod:B
Move disk:3 from rod:A to rod:C
Move disk:1 from rod:B to rod:A
Move disk:2 from rod:B to rod:C
Move disk:1 from rod:A to rod:C*/

