#include <stdio.h>

void temperature_table() {
    printf("%3s\t%6s\n", " ℉", "°C ");
    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}

void reverse_temperature_table() {
    printf("%3s\t%6s\n", " ℉", "°C ");
    for (int fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}

int main() {
    temperature_table();
    reverse_temperature_table();

    return 0;
}