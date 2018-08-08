#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>


int main(){
	char buffer[100]={'\0'};
	//struct flock lock
	int fd1=open("abc.txt", O_RDWR);
	int fd2=fd1;
	int rd=read(fd1,buffer,100);
	write(fd2,"WORLD!",6);
	write(fd1,"HELLO",5);
	printf("fd1= %d fd2= %d\n",fd1,fd2);
	int fd3=dup(fd1);
	printf("fd1= %d fd3= %d\n",fd1,fd3);
	int fd4=dup2(fd1,5);
	printf("fd1= %d fd4= %d\n",fd1,fd4);
	int fd5=fcntl(fd1,F_GETFD,5);
	printf("fd1= %d fd5= %d\n",fd1,fd5);
	return 0;
}
