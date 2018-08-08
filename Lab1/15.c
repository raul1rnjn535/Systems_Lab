#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
	/*int i=0;
	for(i=0;env[i]!=NULL;i++){
		printf("%s\n",env[i]);
	}*/
	int i=0;
	extern char ** environ;
	for(i=0;environ[i]!=NULL;i++){
		printf("%s\n",environ[i]);
	}
	return 0;
}
