#include <stdio.h>
#include <conio.h>

int main(void){
	
	float calif1, calif2, calif3, avg;
	
	printf("Introduce the first note\n");
	scanf("%f", &calif1);
	printf("Introduce the second note\n");
	scanf("%f", &calif2);
	printf("Introduce the third note\n");
	scanf("%f", &calif3);
	
	avg = (calif1 + calif2 + calif3)/3;
	printf("The average is %f\n", avg);
		
	getch();
	return(0);
}
