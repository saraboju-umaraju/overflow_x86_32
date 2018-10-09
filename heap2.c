#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

struct auth {
		char name[32];
		int auth;
};

struct auth *auth;
char *service;

int main(int argc, char **argv)
{
		char buf[128];

		while(1) {
				printf("[ auth = %p, service = %p ]\n", auth, service);

				if(fgets(buf, sizeof(buf), stdin) == NULL) break;

				if(strncmp(buf, "auth ", 5) == 0) {
						auth = malloc(sizeof(auth));
					memset(auth, 0, sizeof(auth));
						if(strlen(buf + 5) < 31) {
								strcpy(auth->name, buf + 5);
						}
				}
				if(strncmp(buf, "reset", 5) == 0) {
						free(auth);
				}
				if(strncmp(buf, "service", 6) == 0) {
						service = strdup(buf + 7);
				}
				if(strncmp(buf, "login", 5) == 0) {
						if(auth->auth) {
								printf("you have logged in already!\n");
						} else {
								printf("please enter your password\n");
						}
				}
		}
}

