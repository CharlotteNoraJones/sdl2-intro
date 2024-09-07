// Copyright 2024 Whatever

#include <SDL2/SDL.h>
#include <stdio.h>

#include <string>

int main(int argc, char* args[]) {
  // These parameters are necessary for SDL2 to function, but won't be used in
  // our code. The are cast to void to avoid compiler warnings about unused
  // variables
  (void)argc;
  (void)args;

  printf("Hello\n");

  return 0;
}
