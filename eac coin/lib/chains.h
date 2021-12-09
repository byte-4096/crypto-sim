#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
//threading coming soon
//hopefully

//used for encrytpion 
char *numers[27];
char *letter


//macros
#define true 1
#define false 0


//random number generator
float getrand(float *m){
    //inititizes rng
    time_t t;
    srand((unsigned) time(&t));
    m = rand() % 1; 
    float s;
    s = &m;
    return s;
}


float *x;
long puzzle(long y){
    getrand(x);
    printf("chain");
    
    return y;
}

//creates a random number and puts it into a file
//then the computer has to find it in a for()
//if it does it first, then it gets a 5 coin prize
extern void createBlock(){
    //variables
    int num;
    long Name;
    int z = 1;

    puzzle(Name);
    printf("block is being added to block chain\n"); 
    FILE *chain;
    chain = fopen("/home/pi/chain.txt", "w");
    printf("please wait...\n");
    time_t t;
    if(chain){
        printf("adding..\n");
        fputc(int(Name),chain);
        printf("Number is in, please stand by\n");
    }else{
        printf("creating chain");
        system("cd /home/pi/ && touch chain.txt");
    }
    fclose(chain);
}