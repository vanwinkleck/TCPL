#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("celsius\t fahr\n");
	while (celsius <= upper) 
	{
		fahr = (9.0/5.0 * celsius + 32);
		printf("%6.1f\t %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

