#include <sys/resource.h> 
#include <sys/time.h> 
#include <unistd.h> 
#include<stdio.h> 
#include<time.h>

int main(){
	clock_t start_t, end_t;
	double total_t;
	start_t=clock();
	int i=0;
	for(;i<100;i++){
		getppid();
	}
	end_t=clock();
	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        printf("Total time taken by CPU: %g\n", total_t  );
        printf("Exiting of the program...\n");
}
