#include    <uma.h>
int count;
int main (void) {

		foo();

}



int foo() {
		int i;
		void *p;

		if(count >= 10)
				exit(0);

		count++;
		printf("count = %d\n", count);
		p = __builtin_return_address(0);
		printf("0 = %x\n", p);
		p = __builtin_frame_address(1);
		printf("1 = %x\n", p);
		foo();

}

