// Simple program for counting the words in the program.
// Developed by Arpit
// Can be used as count_words.out 

#include <stdio.h>
int main() {

    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c;                                                          //use for int value of characters
    
    while((c = getchar()) != EOF) {

        if(c == ' ')
            ++blanks;

        else if(c >= '0' && c <= '9')
            ++digits;

        else if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            ++letters;

        else
            ++others;    

    };

    printf("blanks = %d, digits = %d, letters = %d, others = %d", &blanks, &digits, &letters, &others);
    printf("others = %d \n\n", &others);
    return 0;
}
