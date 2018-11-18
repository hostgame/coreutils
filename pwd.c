// #include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
	char cwd[4096];
	if(getcwd(cwd, sizeof(cwd)) != NULL) {
		write(1,cwd,strlen(cwd));
		write(1,"\n",1);
	}
	return 0;
}
