#include <iostream>
#include <math.h>
using namespace std;

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacio(float a, float b) {
    return a * b;
}

float divisio(float a, float b) {
    if (b != 0)
        return (a / b);
    else {
        cout << "no es pot dividir entre 0" << endl;
        return 0;
    }
}


int main() {

}


