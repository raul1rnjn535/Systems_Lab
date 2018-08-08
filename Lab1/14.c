#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
	char buffer[100]={'\0'};
	printf("Enter filename:  ");
	scanf("%[^\n]s",buffer);
	struct stat s;
	stat(buffer,&s);
	unsigned int mode=s.st_mode;
	int filetype=mode & S_IFMT;
	switch(filetype){
		case S_IFSOCK: printf("socket\n");
		break;
		case S_IFLNK: printf("symbolic link\n");
		break;
		case S_IFREG: printf("regular file\n");
		break;
		case S_IFBLK: printf("block device\n");
		break;
		case S_IFDIR: printf("directory\n");
		break;
		case S_IFCHR: printf("character device\n");
		break;
		case S_IFIFO: printf("pipe\n");
		break;
	}
	return 0;
}
