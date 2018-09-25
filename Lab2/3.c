#include <sys/resource.h> 
#include <sys/time.h> 
#include <unistd.h> 
#include<stdio.h> 

int main () { 
   
   // Define and object of structure 
   // rlimit. 
   struct rlimit rl; 

   // First get the time limit on CPU 
   getrlimit (RLIMIT_NOFILE, &rl); 

   printf("\n Default fd_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max fd_limit is : %lld\n", (long long int)rl.rlim_max); 

   rl.rlim_cur=4;

   setrlimit(RLIMIT_NOFILE,(const struct rlimit*)&rl);

   getrlimit (RLIMIT_NOFILE, &rl); 

   printf("\n Default fd_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max fd_limit is : %lld\n", (long long int)rl.rlim_max); 

   return 0;

}

