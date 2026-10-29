#include <stdio.h>

int main() {
    int temperature[5] = {25, 30, 35, 40, 45};
    int *ptr;
    int i;

    ptr = temperature;

    printf("Temperature Readings:\n");

    for(i = 0; i < 5; i++) {
        printf("Sensor %d Temperature = %d C\n", i + 1, *(ptr + i));
    }

    return 0;
}