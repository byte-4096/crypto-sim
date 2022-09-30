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
int coinss;
int rand_number1;
int num_2;

//trading mode, creates blocks for the user to mine when they enter mine mode
int trade(){

}
//mines numbers
int mine(){
  int x;
  while(x == mine){
    x += 1;
    encode(num_2, 100);
    if(x == num_2)
      encode(rand_number1,1000);
      decode(rand_number1,coinss);
      x = 0
    }
    
}
//creates random number
int encode(int rand_num, int timers){
  srand(time(0));
  rand_num = rand() % timers;
  return rand_num;
}

//tries to decode the random number
int decode(int rand_num, int coins){
  int times = 0;
  for(int x = 0; x > rand_num; x += (rand() % 100)){
    times += 1;
    if(times <= 150){
      printf("too many tries");
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


int main (int argc, char *argv[]){
  printf("CRYPTO-SIMULATOR\n ");
  printf("starting... ");
  while(1){
    char *input[50];
    sleep(2);
    printf("\n\n What would you like to do? ");
    scanf("%s", input);
    if(!(strcmp((char*)"help",(char*)input)) || !(strcmp((char*)"h",(char*)input))){
      printf("You can Trade or enter mining mode");
    }
    else if(!(strcmp((char*)"Trade",(char*)input))){
      trade();
    }
    else if(!(strcmp((char*)"mining",(char*)input))){
      mine();
    }
    else{
      printf("ERROR, type h for help! \n\n\n\n");                                     
      sleep(3);
    }
  }
  return 0;
}        