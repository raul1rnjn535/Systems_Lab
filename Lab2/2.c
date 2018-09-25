#include <sys/resource.h> 
#include <sys/time.h> 
#include <unistd.h> 
#include<stdio.h> 


// https://www.go4expert.com/articles/getrlimit-setrlimit-control-resources-t27477/

int main () { 
   
   // Define and object of structure 
   // rlimit. 
   struct rlimit rl; 

   // First get the time limit on CPU 
   getrlimit (RLIMIT_CPU, &rl); 

   printf("\n Default cpu_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max cpu_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_AS, &rl); 

   printf("\n Default vm_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max vm_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_CORE, &rl); 

   printf("\n Default core_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max core_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_DATA, &rl); 

   printf("\n Default data_Seg_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max data_Seg_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_FSIZE, &rl); 

   printf("\n Default file_size_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max file_size_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_LOCKS, &rl); 

   printf("\n Default lock_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max lock_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_MEMLOCK, &rl); 

   printf("\n Default mem_space_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max mem_space_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_NOFILE, &rl); 

   printf("\n Default fd_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max fd_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_NPROC, &rl); 

   printf("\n Default proc_limit is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max proc_limit is : %lld\n", (long long int)rl.rlim_max); 

   getrlimit (RLIMIT_STACK, &rl); 

   printf("\n Default stack_size is : %lld\n", (long long int)rl.rlim_cur); 
   printf("\n Max stack_size is : %lld\n", (long long int)rl.rlim_max); 

   // // Change the time limit 
   // rl.rlim_cur = 1; 

   // // Now call setrlimit() to set the  
   // // changed value. 
   // setrlimit (RLIMIT_CPU, &rl); 

   // // Again get the limit and check 
   // getrlimit (RLIMIT_CPU, &rl); 

   // printf("\n Default value now is : %lld\n", (long long int)rl.rlim_cur); 

   // Simulate a long time consuming work 
   // while (1); 

   return 0; 

}