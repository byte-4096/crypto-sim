#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//header for main.cpp

//global variables
#define true 1
#define false 0

float coinAmount;
float money;
char *user[100];


int miner(int out,int in){
    int x;
    while(1){
        int y = rand() % 100;
        x++;
        if(y == in){
            printf("gotcha! rewarded one block!");
            money += rand() % 10;
        }
        else if()
    }
    return money;
}
int chain(int transaction){
    int x;
    while(1){
        if(transaction == 1){
           x = rand() % 100;
        }
    }
    return x;
}
int wallet(){
    char input1[256];
    int coins1;
    int coins2;
    int money;
    float chains;
    printf("CRYPTO WALLET");
    printf("which coins do you want to use? eac or rip");
    sscanf(input1,"%s");
    if(input1 == "eac"){
        while(1){
            printf("eac coin balance:%i \n rip coins balance %i",coins1, coins2);
            sleep(2);
            printf("------------CURRENT BLOCK CHAIN --------------");
            printf("%d",chains);
        }
    }
}