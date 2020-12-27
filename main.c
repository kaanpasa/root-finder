#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b, c, delta, root1, root2;
	printf("Enter a, b and c(Example:ax^2+bx+c): ");
	scanf("%d %d %d", &a, &b, &c);
	delta=b*b-(4*a*c);
	root1=(-b+sqrt(delta))/(2*a);
	root2=(-b-sqrt(delta))/(2*a);
	if(delta<0)
		printf("There is no real root.");
	else if(delta=0){
		printf("Only root is: %d", root1);
	}
	else{
		
		printf("Roots are: %d %d", root1, root2);
	}
	return 0;
}
