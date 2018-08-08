#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>


int main(){
	//struct flock lock
	int fd1=open("abc.txt", O_RDWR);
	int x=fcntl(fd1,F_GETFL);
	printf("%d\n",x);
	int accmode = x & O_ACCMODE;
    if      (accmode == O_RDONLY)   printf("read only\n");
    else if (accmode == O_WRONLY)   printf("write only\n");
    else if (accmode == O_RDWR)     printf("read write\n");
    else printf("unknown access mode");
    return 0;
}
