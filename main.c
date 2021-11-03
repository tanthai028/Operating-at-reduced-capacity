#include <stdio.h>

int main(void) {

  // N = num of lines, M = maximum capacity
  int N = 0, M = 0; 

  // L = leaving, E = entering
  int L = 0, E = 0;

  // initial number of customers
  int num = 0;

  // get first line in input data
  scanf("%d %d", &N, &M);
  
  // get data of people leaivng and entering
  for (int i = 0; i < N; i++){
    scanf("%d %d", &L, &E);
    num -= L; // customers leaving
    num += E; // customers entering

    // if maximum capacity exceeds
    if (num > M) {
      printf("YES\n");
      break;
    }
  }
  
  // if capacity does not exceed
  if (num <= M) printf("NO\n");
  
  return 0;
}