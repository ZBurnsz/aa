#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double pi = 3.141;
    double x = 2;
    double z = x / pi;
    cout << z << " " << fmod(x, pi);
    return 0;
}
