#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//global  variables
#define num_blocks  5000

//file handling
FILE *fh;
FILE *hf;
int done = 0;
int num;
float money;
int guess;
int blocks_mined = 0;
float amountof_ai;
const char *hi =  "Hello";
int firstime;
char *input[50];
char *y = "y";
FILE *fs;
float money;
float id = 0;
char *one1  = "trade";


//first function
float mine(float in, float out){
  // resets everytime miner is open
  time_t t;

  fh = fopen("/bin/data/data.txt", "w+");
  srand((unsigned) time(&t));
  //checks for blokcs
  while(1){
    if( blocks_mined == num_blocks){
      printf("reseting blocks");
      printf("closing threads");
      break;
    }
    else{
      if((hf =  fopen("/bin/data/blokcs.txt","r")) == NULL){
        continue;
      }
      else{
        fscanf(hf, "%d", &num);
        
        while(done == 0){
          
          int xs = rand() % 3;
          if(guess == num){
              money += rand() % 5;
              printf("you got it!");
              fprintf(fh, "%d", &money);
              blocks_mined += 1;
              done == 1;
              break;
          }
          else if(guess < num){
              guess += xs;
          }
          else if( guess > num){
              guess -= xs;
              break;
          }
    }
  }
  fclose(fh);
  fclose(hf);
  return 0;

}
//miner is threaded



//wallet
int main(){
  time_t t;
  //starting up file reading and writing before main loop
  srand((unsigned) time(&t));


  //first time logging
  switch(firstime){
    case 0:
      printf("Hello, nice to see you! \n");
      printf(" ai levels now setting randomly");
      amountof_ai = rand() %10;
      sleep(1);
      printf("initizing wallet");
      break;
    case 1:
      printf("Welcome back!\n");
      printf("starting wallet");
      break;
    defalt:
      printf("Something went wrong.\n");
      break;
  }

  while(1){
    printf("----CURRENT PENDING BLOCKS----");
    printf("%d",id);

    printf("what would you like to do? exchange, trade or quit");
    sscanf("%s", &input);
    if(&input == &one1){
      printf("trading process executing...");
      
    }
  }
  return 0;
}