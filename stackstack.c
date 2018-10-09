#include	<stdio.h>
#include	<unistd.h>

int main ( int c , char* argv[] ) {

		char buf[64];
		strcpy(buf,argv[1]);
		puts(buf);
		return 0;
}
