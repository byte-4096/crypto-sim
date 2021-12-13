#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//used for encrytpion 
char *numers[27];
char *letter


//macros
#define true 1
#define false 0


//random number generator
long getrand(long *m){
    //inititizes rng
    time_t t;
    srand((unsigned) time(&t));
    m = rand() % 1; 
    float s;
    s = &m;
    return s;
}



long puzzle(long x){
    getrand(x);
    printf("chain");
    
    return x;
}

/*creates a random number and puts it into a file
/then the computer has to find it in a for loop
/if it does it in rng decided tries, then it gets a 1-10 coin prize
*/
extern void createBlock(){
    //variables
    int num;
    long Name;
    int z = 1;

    puzzle(Name);
    printf("block is being added to block chain\n"); 
    FILE *chain;
    chain = fopen("/usr/chain.txt", "w");
    printf("please wait...\n");
    time_t t;
    if(chain){
        printf("adding..\n");
        fputc(int(Name),chain);
        printf("Number is in, please stand by\n");
    }else{
        printf("creating chain");
        system("cd /usr/ && touch chain.txt");
    }
    fclose(chain);
}