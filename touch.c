#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
	int fd = open(argv[1], O_WRONLY|O_CREAT|O_NOCTTY|O_NONBLOCK, 0666);
	if(fd < 0) {
		write(1,"No such file\n",strlen("No such file\n"));
	}
	int timestamp = utimensat(-100, argv[1], 0, 0);
	return 0;
}