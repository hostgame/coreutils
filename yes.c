#include <stdio.h>
int main(int argc,char **argv) {
	if(argc == 1) {
		while(1) printf("y\n");
	} else {
		while(1) for(int i = 1;i<argc;i++) printf(i<argc-1 ? "%s " : "%s\n",argv[i]);
	}
	return 0;
}