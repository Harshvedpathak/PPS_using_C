//WAP to Find Force Exerted on charge q1 and q2....
//Harsh Vedpathak
#include <stdio.h>

int main()
{
    float q1, q2, r, e0, pi, c;
    printf("Enter the Value of Charge q1 (in Coulombs): ");
    scanf("%f", &q1);
    printf("Enter the Value of Charge q2 (in Coulombs): ");
    scanf("%f", &q2);
    printf("Enter the Distance between charges r (in meters): ");
    scanf("%f", &r);
    e0 = 0.00000000008854;
    pi = 3.142;
    printf("Coulomb's law: F = (1 / (4 * pi * ε₀)) * (q1 * q2 / r^2)\n\n");
    c = (q1 * q2) / (4 * pi * e0 * r * r);

    printf("Electrostatic Force = %.5f Newtons\n", c);

    return 0;
}

