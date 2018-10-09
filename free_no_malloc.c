/* free can only free a malloc'd pointer */

#include    <uma.h>

#include	<stdlib.h>

char *deliver_mail ( void );

int main (void) {

		char* mail = deliver_mail ( ) ;

		printf("%s \n",mail );

		free ( mail );  /* if you know what iam doing ;) */

}

char* deliver_mail  ( void ) {

		char *mail = "Iam The Killer Whale";

		return strdup( mail );       /* magic  lies here */

}
