#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct virus{
  int i;
  char *s;
};

void printfunction(struct virus *j){
  printf("The mutated %s virus will infect %d percent of the population\n", j -> s, j -> i);
}

struct virus *mutate_virus(int percent, char *name){
  struct virus *p = malloc(sizeof(struct virus));
  p -> i = percent;
  p -> s = name;
  return p;
}

int main(){
  srand(time(NULL));
  int r = rand() % 100 + 1;
  struct virus *j = mutate_virus(r, "Oonga Boonga");
  printfunction(j);
  free(j);
  return 0;
}
