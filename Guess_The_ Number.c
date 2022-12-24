#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,numberofGuesses=1;
    srand(time(0));
    number=rand()%100 + 1;
    // printf("Any random number:%d\n",number);
    do{
      printf("Guess any number between 1 and 100:\n");
      scanf("%d",&guess);
      if(guess>number){
       printf("Lower number please!\n");
      }else if(guess<number){
        printf("Higher number please!\n");
      }else{
        printf("You guessed the number in %d attempts.\n",numberofGuesses);
      }
      numberofGuesses++;
    }while(guess!=number);
    return 0;
}
