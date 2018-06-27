#include<stdio.h>
int main(void){
  int cnt;
  printf("~Welcome FizzBuzz~\n");
  for(cnt = 0; cnt < 100; cnt++){

    if(cnt % 3 != 0 && cnt % 5!= 0){
      printf("%d", cnt);
    }
    if(cnt % 3 == 0) 
      printf("Fizz"); 

    if(cnt % 5 == 0) 
      printf("Buzz");
    printf("\n");
  }
  return 0;
}
