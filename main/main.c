#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



//global variables

int MAX_DIFFICULTY = 100000; //dont want the computer frying up now...
int MAX_AI = 1000;

/*
    |     |     :
    |_____|
    |     |     |
    |     |     |

    [created by epic9828]


    `````USE GCC TO COMPILE `````   

    this was built for a final coding project for 7th grade coding, it was first made in python,
    but then i switched  to c

*/






int difficulty = 1000;


char print(char st[256]){
    printf("%s", st);
}


//this mines EAC/RIP
int miner(int out,int in, int diff){
    int x;
    int tries;
    int MAX_TRIES = 10000;
    while(1){
        x = rand() % diff;
        
        if(x == in){
            printf("gotcha! rewarded one block!");
            out += 7;
            if(diff == MAX_DIFFICULTY){
                continue;
            } else{diff += 10;} 
            break;
        }
        else if(tries == MAX_TRIES){
             break;
        }
        else{
            tries++;
            printf(" ");
        }
    }
    return out, diff;
}




int chain(int transaction, int out){
    while(1){
        if(transaction == 1){

           out = rand() % difficulty;
           transaction = 0;
        }
    }
    return transaction, out;
}



//int coinAmount1;
int coinAmount2;
float money;

//this supports two crypto currencies 
int main() {
    char input1[256];
    int coins1;
    int coins2;
    float chains;
    printf("CRYPTO WALLET");
    printf("\n\n");
    printf("which coins do you want to use? eac or rip");
    sscanf(input1,"%s");
    if(input1 == "eac"){
        while(1){
            printf("eac coin balance:%i \n rip coins balance %i",coins1, coins2);
            sleep(5);
            printf("------------CURRENT BLOCK CHAIN --------------");
            printf("%d",chains);
            sleep(2);
            printf("\n What would you like to do? ");
            printf("trade or exit?");
            sleep(2);
            scanf("%s",input1);
            if (input1 == "trade"){

            }
            else if(input1 == "exit"){
                break;
            }
        }   
    } 
    else if(input1 == "rip"){
        while(1){
            printf("eac coin balance: %i \n rip coins balance %i",coins1, coins2);
            sleep(5);
            printf("------------CURRENT BLOCK CHAIN --------------");
            printf("%d",chains); 
            sleep(2);
            printf("\n What would you like to do? trade or quit ");
            sleep(2);
            scanf("%s",input1);
            if(input1 == "trade"){
                printf("What would you like to trade?");
                printf("type USD to sell them, RIP to buy them");
                scanf("%s",input1);
                if(input1 == "USD"){
                    int x;
                    int *amount;
                    printf("how much do you want to trade? you have:%i",coins2);
                    scanf("%i", amount);
                    if(amount > 0 && coinAmount2 > 0){
                        coinAmount2 -= *amount;
                        money += *amount * 2;
                        chain(1,x);
                        miner(coinAmount2,x, difficulty);
                        
                    }else{
                        printf("sorry, you don't have enough coins to trade with");
                    }
                    
                }
                else if(input1 == "RIP"){
                    int *amount;
                    print("buying RIP");
                    sleep(2);
                    printf("you have %i money", money);
                    printf("\n how much RIP do you want to buy? ");
                    scanf("%i", amount);
                    if (amount > 0 && money > 10){

                    }
                }
                else 
                {
                    printf("sorry i didn't get:%s \n please try again", input1);
                }

            }
            else{
                break;
            }

            sleep(2);
        }


    }
    

}