#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv) {
	ssize_t nrd;
	int fd_source;
	int fd_dest;
	char buffer[100];

	fd_source = open(argv[1], O_RDONLY);
	fd_dest = open(argv[2], O_CREAT | O_WRONLY, 0775);
	while (nrd = read(fd_source,buffer,50)) {
		write(fd_dest, buffer, nrd);
	}

	close(fd_source);
	close(fd_dest);
	return 0;
}
