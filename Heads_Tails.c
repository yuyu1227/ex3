#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i;
    int n;
    int count_H = 0;
    int count_T = 0;

    printf("Tossing a coin...\n");

    srand((unsigned)time(NULL));

    n = rand();

    for (i = 1; i < 4; i++){

        n = rand()%2;

        if(n==1){
            printf("Round %d:Heads\n",i);
            count_H++;
        }else{
            printf("Round %d:tails\n",i);
            count_T++;
        }
    }

    printf("Heads: %d,tails: %d\n", count_H,count_T);

}
