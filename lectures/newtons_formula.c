#include <stdio.h>
#include <math.h>

int main(){
	
	double guess = , epsilon,a; 
	
	printf("Enter intial guess, epsilon, and number inside the radical");
	scanf(" %lf %lf, %lf", &guess, &epsilon, &a);
	
	
	while ( fabs(sqrt(guess) - a) > epsilon ){
		guess = 0.5 * (guess + a / guess);
		printf("value is %lf", guess);
		
	}
	printf("value is %lf", guess);
	/* successful return */ 
	return 0;
}