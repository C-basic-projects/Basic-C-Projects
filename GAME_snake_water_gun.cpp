#include<bits/stdc++.h>
using namespace std;
int snakewatergun(char you, char comp){
	// return 1 if you win, -1 if you lose and 0 if draw
	// condition for draw
	//cases covered:
	//SS
	//GG
	//WW
	if(you == comp){
		return 0;
	}
	//non-draw conditions
	//cases covered:
	//SG
	//GS
	//SW
	//WS
	//GW
	//WG
	
	
	if(you=='S' && comp=='G'){
		return -1;
	}
	else if (you=='G' && comp=='S'){
		return 1;
	
	}
     else if(you=='S' && comp=='W'){
		return 1;
	}
	else if(you=='W' && comp=='S'){
		return -1;
	}

	if(you=='G' && comp=='W'){
		return -1;
	}
	else if(you=='W' && comp=='G'){
		return 1;
	}
	if(you=='G' && comp=='S'){
		return 1;
	}
	else if(you=='S' && comp=='G'){
		return -1;
	}
    return 0;
}
int main(){
    char you, comp;
    comp = 'S';
    printf("Enter 'S' for snake, 'W' water and 'G' for gun\n");
    scanf("%C", &you);
    int result = snakewatergun(you, comp);
    	printf("You chose %c and computer chose %c.",you,comp);
    if(result ==0){
    	printf("Game draw\n");
	}
	  else if(result==1){
    	printf("You win\n");
	}
	 else{
    	printf("You Lose\n");	
    }
    return 0;
}