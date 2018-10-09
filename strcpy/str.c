#include    <uma.h>
int main (void) {
		char a[4] = "ABCD";
		char b[2] = "EF";
//		char c[6] = {0,0,0,0,0,0};
		strcpy(a,b);
		printf("%s\n",a);
		printf("%s\n",b);
		printf("%p\n",a);
//		printf("%p\n",c);

}
