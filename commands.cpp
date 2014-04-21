#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* getUserInput () {
  char input[20];
  scanf ("%20s",input);
  for (char *p = input; *p; ++p) *p = tolower(*p);
  if (strncmp(input, "y", 20) == 0 || strncmp(input, "yes", 20) == 0) {
    return (char*)"Good!";
  } else if (strncmp(input, "n", 20) == 0 || strncmp(input, "no", 20) == 0) {
    return (char*)"Come on!";
  } else {
    return (char*)"No command entered.";
  }
}

int main () {
  printf("Do you want to play?\n");
  printf("%s\n", getUserInput());
  return 0;
}
