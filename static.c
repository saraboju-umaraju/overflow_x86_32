#include    <uma.h>
int main (void) {
		static const int  a = 23;
		int *p = &a;
		*p = 12;
		printf("%d %d\n",a,*p);

}
