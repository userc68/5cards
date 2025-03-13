#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_CARDS 52

char *deck[NUM_CARDS] = {
  "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "TH", "JH", "QH", "KH", "AH",
  "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "TD", "JD", "QD", "KD", "AD",
  "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "TC", "JC", "QC", "KC", "AC",
  "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "TS", "JS", "QS", "KS", "AS"
};

int main() {
  srand(time(NULL));

  char *c1, *c2, *c3, *c4, *c5;

  c1 = deck[rand() % 52];
  do {
    c2 = deck[rand() % 52];
  } while (strcmp(c1, c2) == 0);
  do {
    c3 = deck[rand() % 52];
  } while (strcmp(c1, c3) == 0 || strcmp(c2, c3) == 0);
  do {
    c4 = deck[rand() % 52];
  } while (strcmp(c1, c4) == 0 || strcmp(c2, c4) == 0 || strcmp(c3, c4) == 0);
  do {
    c5 = deck[rand() % 52];
  } while (strcmp(c1, c5) == 0 || strcmp(c2, c5) == 0 || strcmp(c3, c5) == 0 || strcmp(c4, c5) == 0);


  printf("%s | %s | %s | %s | %s\n", c1, c2, c3, c4, c5);
  return 0;
}
