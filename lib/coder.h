#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "chains.h"
/* mb512 encoder    
this enc odes .txt files so this will keep your documents proteced.
the random number key saves to your local disk, hackers will have a hard time getting to it.
and if they do, all hell breaks loose
*/



/*macros*/
#define true 1
#define false 0

//creates a key
void createKey(){
    system("cd /tmp/ && sudo touch key1.txt");
}



//main
int main(){
    printf("mb512 encryption/ decrytper");
    time_t t;
    
    char *fpath;
    char *M1MAX;
    FILE *key1;
    key1 = fopen("/usr/key1.txt", "w+");
    FILE *path;

    if(key1){
        char *input1;
        printf("key1 detected\n");
        printf("procedure beginning\n please enter a file path for the file you want to encode\n :");
        fgets(fpath, 512,stdin);
        sscanf(fpath,"%s",M1MAX);
        path = fopen(fpath, "w+");
        if(path){
            printf("file found, enter encode for encoding, decode for decoding\n note: you will have to enter a valid encoded file for the decoder to work, if you don't there will be errors");
            sleep(2);
            fgets(input1,512,stdin);
            sscanf(input1,"%s",M1MAX);
            if(input1 == "encode"){
                printf("encoding started\n");
                for(int yimes = 0; yimes < 50;yimes++){
                    printf("%s", "hi");
                }
                printf("file printed, encoding now...");
                
            }else if(input1 == "decode"){
                printf("decoing file, please enter file path for decoding\n");
            }
        }else{
            printf("ERROR, file not found\n");
            printf("closing program, enter any key to continue\n");
            getchar();
        }
        
    }else{

        //handiling no files
        printf("the key file 1 is not created,creating now\n  ");
        createKey();
        float *rand1;
        //gets random float
        //TODO; convert pointer to float
        getrand(rand1);
        fputc(rand1,key1);
        printf("Created, restart your computer, press any key to continue\n");
        getchar();
    }

    fclose(key1);
    return 1;
}