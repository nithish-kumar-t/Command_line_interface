#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main(int argc, char ** argv) {

    int i = 0, j = 0, n = 0;
    printf("Enter number of variables to be given input\t");
    scanf("%d", &n);
    //initialize the Host which stores the HostName or a valid IP
    //ttl uses to give time to live of a packet bbefore reaceh to the destination
    
    char *host = (char*)malloc(20*sizeof(char));
    char *ttl  = (char*)malloc(20*sizeof(char));
    
    //command is the ping command which is given relative to the input arguments
    
    char *command = (char*)malloc(60*sizeof(char));
    //if only host address is given as input then

    if (n == 1){
    	printf("Enter Host Address\t");
    	scanf("%s", host);
		
		strcpy(command ,"ping ");
		
		i = 5;
		while (j <strlen(host)) {
			command[i] = host[j];
			i += 1;
			j += 1;
		}
	}

	else if (n == 2){
		
		printf("Value of TTL is\t");
		scanf("%s", ttl);
		
		printf("Enter Host Address\t");
		scanf("%s", host);
		
		strcpy(command, "ping -t ");
		
		i = 8;
		while (j <strlen(ttl)) {
			command[i] = ttl[j];
			i += 1;
			j += 1;
		}

		command[i] = ' ';
		i += 1;
		
		j = 0;
		while (j <strlen(host)){
			command[i]= host[j];
			i += 1;
			j += 1;
		}
	}
	//printf("%d\n", argc);
	//puts(command);
	system(command);
    return 0;
}
