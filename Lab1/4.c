#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
	int fd=open("abc.txt", O_RDWR);
	printf("fd =%d\n",fd);
	return 0;
}
