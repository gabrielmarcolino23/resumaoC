#include <stdio.h>

float Celsius2Fahrenheit(float x) {
    return (9.0/5.0 *x) + 32;
}

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = Celsius2Fahrenheit(celsius);

    printf("%.0fC e equivalente a %.0fF",celsius,fahrenheit);

}
