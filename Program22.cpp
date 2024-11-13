//Write a simple c++ program to overload a binary + operator//

#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imag;

    public:
        void setValues(int r, int i) {
            real = r;
            imag = i;
        }
        Complex operator + (const Complex &obj) {
            Complex result;
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
        }
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1, c2, c3;
    c1.setValues(3, 5);
    c2.setValues(2, 4);
    c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}

/*OUTPUT:-
Sum of complex numbers: 5 + 9i*/
