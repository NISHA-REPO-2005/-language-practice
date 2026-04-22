#include<stdio.h>

float convertTemp(float celcius);

int main() {
    float far = convertTemp(37);
    printf("The temperature is %f:", far);
    return 0;
}

float convertTemp(float celcius){
    float far = celcius * 0.18 + 32;
    return far;
}
