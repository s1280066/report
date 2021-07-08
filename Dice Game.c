#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int sum=0, value, i;
    char name[10];
    //名前入力
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    
    printf("Rolling the dice...\n");
    
    srand((unsigned int)time(NULL));
    //乱数1~6
    for(i=1;i<=2;i++){
        sum += value = 1 + rand() % 6;
        printf("Die %d: %d\n", i, value);
    }
  
    printf("Total value: %d\n", sum);
    
  return 0;
}

