#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
		double a,b,c;
		double diskriminant,kok1,kok2,gerceksayi,sanalsayi;
		
		printf("a'nin degerini giriniz :");
		scanf("%lf",&a);
		
		printf("b'nin degerini giriniz :");
		scanf("%lf",&b);
		
		printf("c'nin degerini giriniz :");
		scanf("%lf",&c);
		
		diskriminant=b*b - 4*a*c;
		
		if (diskriminant>0)
		{
			kok1 = (-b+sqrt(diskriminant))/(2*a);
			kok2 = (-b - sqrt(diskriminant))/(2*a);
			printf("Kokler: %.2lf ve %.2lf\n",kok1,kok2);			
			
		}
        else if (diskriminant == 0)
        {
        	kok1 = kok2 = -b/(2*a);
        	printf("Cift Kok %.2lf\n",kok1);
        		
		}
		//normalde diskriminant<0 olmaz sanal sayılı kök olur onu böyle yapmaya çalıştım
	
        else {
        	gerceksayi= -b/(2*a);
        	sanalsayi= sqrt(-diskriminant)/(2*a);
        	printf("Gercel sayi: %.2lf ve sanal sayi: %.2f\n",gerceksayi,sanalsayi);
		}
	
	
	
	
	
	
	
	return 0;
}