#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
	int fd=creat("abc.txt", 0777);
	printf("fd =%d\n",fd);
	return 0;
}
