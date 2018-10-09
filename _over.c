#include    <uma.h>
int main (void) {
		char *p = malloc (1);
//		unsigned long long int *q = malloc (1);
//		unsigned long long i=0;
		printf("%d %d \n",sizeof(p),sizeof("umauma"));

		printf("%s\n"+1,"uma");
		printf("%d\n",malloc_usable_size(malloc(0)));
//		for(; i < 10 ; i++ ) {
//				p[i]=i;
//		}
///		free(p);
//		for( i = 0 ; i < 220 ; i++ ) {
//			printf("%llu\n  ",p[i]);
		}
