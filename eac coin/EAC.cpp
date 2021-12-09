#include <iostream>
#include <string.h>
#include "lib/chains.h"
#include "lib/miner.h"
#include <thread>


using namespace std;



//important global variables
long user_profile;
long *ID = 0;
 

//main loop
void wallet(){
	float x = 100;
	float money = 0;
	float amount;
	string des;
	cout << "---EAC COIN WALLET---\n";
	while(1){
		cout << "you have " << x << " EAC\n";
		cout << "do you want to exchange any EAC, yes/no \n";
		cin >> des;
		if(des == "yes"){
			cout << "what do you want to exchane,enter 1 for EAC for usd , 2 for usd for EAC\n";
			cin >> des;
			if(des == "1" and x > 0){
				cout << "processing...\n";
				cout << "how much would you like to exchange, 1 EAC = 4 USD\n";
				cin >> amount;
				money += amount * 4;
				x -= amount;
				createBlock();
				cout << "you have " << x << " EAC LEFT" << " your USD balance is now " << money << "\n";
			}
			else if(des == "2" and not money <= 0){
				cout << "how much coins would you like to exchange? 4 USD for 1 EAC\n";
				cin >> amount; 
				money -= amount * 4 ;
				x += amount;
				createBlock();
				cout << "you have " << x << " EAC now" << ". your USD balance is now " << money << "\n";
			}
			else{
				cout << "something went wrong\n";
			}
		}
		else if(des == "no"){
			break;
		}
	}
}


//main 
int main(int argc, char **argv)
{
	std::thread thread_obj(wallet);
	std::thread thread_obj(mine)
}