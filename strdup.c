#include    <uma.h>

int main (void) 
{
	char *p1="dabba";

	char *p2;

	p2 = strdup(p1);

	printf("%s\n",p2);

		return 0;
}
