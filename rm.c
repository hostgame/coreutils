#include <unistd.h>

int main(int argc, char **argv) {
	unlinkat(-100, argv[1], 0);
	return 0;
}
