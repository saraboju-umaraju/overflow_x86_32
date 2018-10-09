#include	<stdio.h>
int fun1() {

return 1;
//printf ( "iam fun2" ) ;
}
int fun2() {

return 2;
//printf ( "iam fun2" ) ;
}

int data = 2;

int *p = &data;

int main ( void )

	
{

	fun1();
	fun2();
	int cnt = 0 ;

	printf ("Address of fun1 = %08X\n", fun1 );
	printf ("Address of fun2 = %08X\n", fun2 );
	
	while ( p != fun1  ) {

		printf ( "Value of p = %08X *p = %08X\n", ( unsigned int ) p, ( unsigned int ) *p );
		cnt++;
		p++;

	}
	*p = fun2 ;

	fun1();

	printf ("After loop p = %08X *p = %08X\n", ( unsigned int ) p, ( unsigned int ) *p ) ;

}
