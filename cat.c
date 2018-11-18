#include <fcntl.h>
#include <sys/types.h>

char buffer[1024];

int main(int argc,char **argv){
	int file,size;
	char *ch;

	if(argc > 1) {
		for(int i = 1; i<argc; i++){
			int file_descriptor =  open(argv[i],O_RDONLY);
			if(-1 != file_descriptor) {
				ssize_t bytes_read;
				while((bytes_read = read(file_descriptor, buffer, 1024)) > 0){
					write(1,buffer,bytes_read);
				}
			}
			close(file_descriptor);
		}
		
	}
	return 0;
}
