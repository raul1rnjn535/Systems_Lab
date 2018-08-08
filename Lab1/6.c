#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
	char buffer[100];
	read(0,buffer,10);
	write(1,buffer,5);
	return 0;
}
