#include    <uma.h>
int target=12;
int main (void) {
		int stack=12;
		int *ptr=&stack;
		int  *ptr2=&target;
		printf("address of ptr = %08x\n",ptr);
		printf("address of ptr2= %08x\n",ptr2);
		printf("diff is %u \n",(ptr) - ptr2);
}
