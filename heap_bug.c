#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	
		char *p, *q;

		p = malloc(1024);
		q = malloc(1024);
		if (argc >= 2)
				strcpy(p, argv[1]);
		free(q);
		free(p);
		return 0;
}
