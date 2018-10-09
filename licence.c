#include    <uma.h>

int main (int argc , char* argv[]) {

		if( argc==2 ) {
				
				printf("checking licence\n");

				int i=0;
				
				int sum=0;
				
				for(i=0;i<strlen(argv[1]);i++)
				
						sum+=argv[1][i];
		

		if( sum==255 ) {

				printf("RIGHT\n");
		}

		else {
				printf("WRONG\n");
		}

		}

		else
		{
				printf(" usage violation\n");
}

}

