/*  Pipe.c: Finding the volume of a hallow cylinder  */
/*                                                   */
/*  author: James Holt                               */
/*                                                   */
/*  modifications:                                   */
/*  2/9/2023 RD initial version                      */

#include <stdio.h>

/*  main function */

int main(void)
{
        /* variable definitions */

         double r, R ,L, T, V, i, o, rings, t;
	 float p = 3.14159;

	/* input section */

        printf("Please enter the inner radius of the pipe (r): ");
	scanf("%le", &r);
	printf("\n");

	printf("Please enter the outer radius of the pipe (R): ");
	scanf("%le", &R);
	printf("\n");

	printf("Please enter the length of the pipe (L): ");
	scanf("%le", &L);
	printf("\n");

	/* computation section */

	T = R - r;

	V = p * ( (R*R) - (r*r) ) * L;

        i = (p * L * (2 * r));

	o = (p * L * (2 * R));
	     
        rings = 2 * ((p * R * R) - (p * r * r));

	t = i + o +  rings;
	
	/* output section */

	printf("The thickness of the pipe is: (%f)\n", T);
	
        printf("The volume of the pipe is: (%f)\n", V);

	printf("Surface area of the inner pipe: (%f)\n", i);

	printf("Surface area of the outer pipe: (%f)\n", o);

	printf("Surface area of the rings: (%f)\n", rings);

	printf("The total surface area of the pipe: (%f)\n", t);

	return 0;

}
