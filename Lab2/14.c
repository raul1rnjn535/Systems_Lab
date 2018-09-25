#include<stdio.h>
#include<unistd.h>

int main(){
	int pfd[2];
	char buffer[7],reader[10];
	pipe(pfd);
	printf("Enter text: ");
	gets(buffer);
	write(pfd[1],buffer,7);
	read(pfd[0],reader,sizeof(reader));
	printf("%s\n",reader);
	return 0;
}