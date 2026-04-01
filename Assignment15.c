#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
  srand(time(0));
num=rand() % 900+100;
printf("%d", num);
return 0;
}

