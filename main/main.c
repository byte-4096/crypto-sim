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
float money1;
int money;//coin amount 
float id = 0;

int rand_number1;
int num_2;

//trading mode, creates blocks for the user to mine when they enter mine mode
int trade(){
  
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
    if(times <= 1500){
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
//mines numbers
int mine(){
  
}

int main (int argc, char *argv[]){
  printf("CRYPTO-SIMULATOR\n ");
  printf("this is just a simulation, the currency here is fake\n");
  sleep(3);
  while(1){
    printf("\namount of money :%i", money);
    char *input[50];
    sleep(2);
    printf("\n\n What would you like to do? ");
    scanf("%s", input);
    //logic controllers
    if(!(strcmp((char*)"help",(char*)input)) || !(strcmp((char*)"h",(char*)input))){
      printf("You can Trade or enter mining mode");
    }
    else if(!(strcmp((char*)"Trade",(char*)input)) || !(strcmp((char*)"trade",(char*)input))){
      float price = (rand() % 100) / 2;
      int x = 1;
      printf("YOUR COIN BALANCE %d", money);
      printf("EAC COIN PRICE: %f", price);
      printf("What would you like to do? exchange or buy EAC\n");
      scanf(input, "%s");
      if(!(strcmp((char*)"exchange",(char*)input))){
        printf("you are now selling EAC for USD");
      }
      else if(!(strcmp((char*)"buy",(char*)input))){
        
      }
    }
    else if(!(strcmp((char*)"mining",(char*)input))){
      int x = 1;
      printf("entering\n");
      sleep(3);
      encode(num_2, 100);
      while(x){ 
         x += 1;
        if(x == num_2){
         printf("block found");
          encode(num_2,100);
      
         x = 0;
        }
    
      }
     money += 55; 
    }
    
  }
  return 0;
}        

