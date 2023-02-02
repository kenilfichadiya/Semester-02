#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number ,guess,nguesses=1;
    srand(time(0));
    number =rand()%100+1; 
//  genrates a random number between 1 to 100
    // printf("the number is %d\n",number);
    // keep running the loop until the number is gussed
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please");
        }
        else if(guess<number){
            printf("higher number please");

        }
        else{
            printf("you gussed it in%d attempts\n",nguesses);
        }
        nguesses++;

    }while(guess!=number);
    return 0;
}