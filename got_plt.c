#include	<stdio.h>

int global = 12 ;

int main ( void ) {

		//	fun1();

		int cnt = 0 ;

		int *p = &global ;

		fun2();

		printf("hii%p %p\n",p,&global);

		while (  cnt!=1000) {

				printf("%p\n",*p);

				cnt++;

				p++;

		}

		printf ("cnt value is %d\n",cnt) ;

		return 0 ;

}

int fun1 ( void ) {

		printf ("fun1 %p\n", fun1 ) ;

}

int fun2 ( void ) {

		printf ("fun2 %p \n",fun2) ;

}
