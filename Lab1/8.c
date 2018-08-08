#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
	char buffer[50]={'\0'};
	int fd1=open("abc.txt", O_RDONLY);
	char c;
	int i=0;
	while(1){
		int rd=read(fd1,&c,1);
		buffer[i++] = c;		
		if(rd<1){
		  i=0;		
		  break;
		}
		else if(c=='\n'){
		  buffer[i++] = '\0';
                  write(1,buffer,i);
		  //getchar();	
		  i=0;		
		}
		/*else{
		  buffer[i++]=c;		
		}*/
		
	}
	return 0;
}
