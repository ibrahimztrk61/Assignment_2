#include <stdio.h>
#define niceIncSysCallNumber 355

int main(int argc, char *argv[]){
	
	
	int pid = atoi(argv[1]);
	int niceIncValue = atoi(argv[2]);
	
	
	long result = syscall(niceIncSysCallNumber, pid, niceIncValue);
	printf("Result of the syscall is %ld", result);
	return 0;
}
