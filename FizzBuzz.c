#include <stdio.h>

// Print Fizz if divisble by 3
// Print Buzz if divisble by 5
// Print FizzBuzz if divisble by both.
// Otherwise print 1 - 100

int main(void) {
	int i;
	for(i = 0; i <= 100; i++) {		
		if (i % 3 == 0 && i % 5 == 0) {
			printf ("FizzBuzz: %d\n", i);
		} else if (i % 3 == 0) {
			printf ("Fizz: %d\n", i);
		} else if ((i%5) == 0) {
			printf ("Buzz: %d\n", i);
		} else	{ 
			printf("%d\n", i);
		}
	}	
	return 0;
}
