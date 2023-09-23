/*
You are to develop the function
randchar() as a separate file (random.c) and include it in your
repository. The function randchar() is a character function that
returns a random character from ‘A’ – ‘Z’. The character is used in
the main program to generate a random 7 letter word.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// hello




char randchar() {
    srand(time(NULL));
    int random = rand() % 26 + 65;
    char c = random;
    return c;
}

