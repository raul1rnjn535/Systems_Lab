#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(int argc,char* argv[], char *env[])
{
	int i=0;
	char *filename="abc.txt";
	char buffer[50];
	struct flock lock;
	printf("opening file abc.txt\n");
	int fd=open("abc.txt",O_RDONLY);
	printf("locking file abc.txt for read operation\n");
	lock.l_type= F_RDLCK;
	fcntl(fd,F_SETLKW,&lock);
	printf("locked file abc.txt\n");
	int s=read(fd,buffer,50);
	printf("Press enter to unlock\n");
	getchar();
	write(1,buffer,s);
	return 0;
}
