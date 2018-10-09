#include    <uma.h>
int main (int c,char **v) {

		if (c != 2)
		{
				printf("ENTER AGAin\n");
				return 0;
		}
		 char ps[20]="paityam";
		  
		 if(strcmp(ps,v[1]))
				 printf("WRONG\n");
		 else
				 printf("RIGHT\n");

}


