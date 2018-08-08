/*#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>


int main(){
	//struct flock lock
	char buffer[100];
	sleep(10);
	int rd=read(0,buffer,10);
	write(1,buffer,rd);
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

       int
       main(void)
       {
           fd_set rfds;
           struct timeval tv;
           int retval;

           /* Watch stdin (fd 0) to see when it has input. */
           FD_ZERO(&rfds);
           int fd1=0,fd2=1;
           FD_SET(fd1, &rfds);

           /* Wait up to five seconds. */
           tv.tv_sec = 5;
           tv.tv_usec = 0;
           fd_set wd;
           printf("rfds= %d",rfds);
           unsigned int fd=open("abc.txt",0777);
           FD_ZERO(&wd);
           FD_SET(fd, &wd);
		   retval = select((fd1>fd2?fd1:fd2)+1, &rfds, &wd, NULL, &tv);
           /* Don't rely on the value of tv now! */

           if (retval == -1)
               perror("select()");
           else if (retval)
               printf("Data is available now.\n");
               /* FD_ISSET(0, &rfds) will be true. */
           else
               printf("No data within five seconds.\n");

           exit(EXIT_SUCCESS);
       }