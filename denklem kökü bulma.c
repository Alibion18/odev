#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

    double a, b, c;
    double diskriminant, kok1, kok2, gerceksayi, sanalsayi;

    printf("a, b ve c katsayilarini girin: ");
    scanf("%f %f %f", &a, &b, &c);

    diskriminant = b * b - 4 * a * c;

    if (diskriminant > 0) {
        kok1 = (-b + sqrt(diskriminant)) / (2 * a);
        kok2 = (-b - sqrt(diskriminant)) / (2 * a);
        printf("Kokler: %.2f ve %.2f\n", kok1, kok2);
    }
    else if (diskriminant == 0) {
        kok1 = kok2 = -b / (2 * a);
        printf("Cift kok: %.2f\n", kok1);
    }
    else {
        gerceksayi = -b / (2 * a);
        sanalsayi = sqrt(-diskriminant) / (2 * a);
        printf("Gercel sayi: %.2f ve sanal sayi: %.2f\n", gerceksayi, sanalsayi);
}
	
	
	
	
	
	
	return 0;
}