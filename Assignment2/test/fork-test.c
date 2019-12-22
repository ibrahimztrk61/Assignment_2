#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){	
	int n;
	
	printf("Set the nice value of this process");
	scanf("%d", &n);	
	
	pid_t pid, getid;
	getid = getpid();
	printf("%s %d\n", "Process ID:", getid);
	
	
	pid = fork();
	printf("%s %d\n", "Fork(Child) PID:", pid);
	
	return 0;
}
