#include <stdio.h>

int main() {
	
	int temperature = 25;
	
	int *tempPr = &temperature;
	
	printf("%d\n", *tempPr);
	
	return 0;
}
