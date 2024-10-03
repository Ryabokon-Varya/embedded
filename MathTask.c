#include <stdio.h>
#include <math.h>

//Variant 1
int main() {

    // Define a
    double a = 45.0;

    // Calculate the value of z1 and z2
    double z1 = 2 * pow(sin(3*M_PI - 2*a), 2) * pow(cos(5*M_PI + 2*a), 2);
    double z2 = (1.0 / 4.0) - (1.0 / 4.0)*(sin((5.0 / 2.0)*M_PI-8*a));

    // Print the result
    printf("z1 = 2 * sin(3 * pi - 2 * %.2f)^2 * cos(5 * pi + 2 * %.2f)^2 = %.2f\n", a, a, z1);
    printf("z2 = 1/4 - 1/4 * sin(5/2 * pi - 8 * %.2f) = %.2f", a, z2);

    return 0;
}
