/*Q2-(26-08-2025) Covert the given temp in celcius to degree F
*/

#include <stdio.h>

int main() {
    float c;
    printf("input temp. in celcius: ");
    scanf("%f", &c);

    printf("Fahrenheit=%.0f\n", (c * 9 / 5) + 32);
    return 0;
}