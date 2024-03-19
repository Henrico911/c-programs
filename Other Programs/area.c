#include <stdio.h>
int main(){
	double rad, A;
	const double PI = 3.1416;
	
	printf("Enter radius: ");
	scanf("%lf", &rad);
	
	A = PI * (rad * rad);
	
	printf("Area is: %.2lf cm^2", A);
	
	
	
	
	return 0;
}
