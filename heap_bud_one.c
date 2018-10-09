#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[1024];
int n = 5;    //data section

int nn = 5;    //data section

void fun ( void )
{

	int i = 0;
		
	for ( i = 0; i < 1024; i++ )
		a[i] = i;

}

int main(int argc, char **argv) {
	
		char *p, *q;

		p = malloc(12);  // in heap
	
		q = malloc(1024);
		
		fun();

		int count = 0 ;

		printf ( "adress of a is %08x \n", a );
		
		printf ( "adress of a is %08x \n", &a[1024] );
		
		printf ( "adress of p is %08x \n", p - 4064 - 4092 );
		
		printf ( "adress of n is %08x \n", &n );

		printf ( "adress of nn is %08x \n", &nn );

		while ( p-- != ( &n ) ) {

				count ++ ;

		}
		/*printf ( "%u\n",count );
		printf ( "adress of p-count is %08x ", p-count );

		p++ ;
	
		printf ( "adress of p is %08x\n ", p );*/
	
		*p = 12 ;

		printf ("value of n is %d\n",n) ;
		/*		if (argc >= 2)
				strcpy(p, argv[1]);
		//	  free(q);
		printf("n = 0x%08x\n", n);
		//	  free(p);*/
		return 0;
}
