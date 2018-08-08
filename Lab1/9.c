#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>


int main(){
	char buffer[50]={'\0'};
	int fd1=open("abc.txt", O_RDONLY);
	struct stat f;
	fstat(fd1,&f);
	printf("inode->%lu\n",f.st_ino);
	printf("hard link->%lu\n",f.st_nlink);
	printf("uid->%lu\n",f.st_uid);
	printf("gid->%lu\n",f.st_gid);
	printf("size->%lu\n",f.st_size);
	printf("blksize->%lu\n",f.st_blksize);
	printf("blks->%lu\n",f.st_blocks);
	printf("last access->%lu\n",f.st_atime);
	printf("last m->%lu\n",f.st_mtime);
	printf("last c->%lu\n",f.st_ctime);
	return 0;
}
