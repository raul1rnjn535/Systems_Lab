#include<stdio.h>
#include<unistd.h>

int main(){
	int pfd[2];
	char buffer[7],reader[10];
	pipe(pfd);
	if(fork()){
		printf("This is parent. Enter text : ");
		scanf(" %[^\n]s",buffer);
		write(pfd[1],buffer,7);		
	}
	else{
		sleep(5);
		read(pfd[0],reader,sizeof(reader));
		printf("This is child. You entered : ");
		printf("%s\n",reader);
	}
	return 0;
}