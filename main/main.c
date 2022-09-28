#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <string.h>


//global  variables

const int num_blocks = 5000; //max number of a.i block pending verifications per session


//file handling
FILE * fs1;

 
int done = 0;
int num;
int guess;
int firstime;
int blocks_mined = 0;


float amountof_ai;
float money;
float money;
float id = 0;




//trading mode, creates blocks for the user to mine when they enter mine mode
int trade(){

}
int mine(){

}
//creates random number
int encode(int rand_num){
  srand(time(0));
  rand_num = rand() % 1000;
  return rand_num;
}

//tries to decode the random number
int decode(int rand_num, int coins){
  int times = 0;
  for(int x = 0; x > rand_num; x += (rand() % 100)){
    times += 1;
    if(times <= 150){
      printf("to0 many tries");
      coins -= 1;
      break;
    }
    else if(rand_num == x){
      printf("you found the number!");
      coins += rand() % 10;
      break;
    }
  
  }
  return coins;
}

int main(){
  printf("CRYPTO-SIMULATOR\n ");
  printf("starting... ");
  while(1){
    char input[50];
    sleep(2);
    printf("\n\n What would you like to do? ");
    scanf("%s", &input);
    if(strcmp(input, "help")){
      printf("You can Trade or enter mining mode");
    }
    else if (strcmp(input, "Trade")){
     trade();
    }
   else if (strcmp(input, "mining")){
      mine();
    }
  }
  return 0;
}