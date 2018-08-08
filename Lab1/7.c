#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
	char buffer[50];
	int fd1=open("abc.txt", O_RDONLY);
	int fd2=creat("def.txt", 0777);
	int size=read(fd1,buffer,50);
	write(fd2,buffer,size);
	return 0;
}
