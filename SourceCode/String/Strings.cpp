#include<stdio.h>

void greetings(char hello[]){
  printf("\n%s ",hello);
}

void toUpper(char str[]){
  printf("Upper Case of string is %s",str);
}


int main(){
 char greet[] = "Hello World!";
 greetings(greet);
}
