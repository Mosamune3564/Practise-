#include <stdio.h>
#include <string.h>
#include <ctype.h>


unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    char word[15]; 
    int freq[26] = {0}; 
    unsigned long long total_anagrams = 0; 
    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        freq[word[i] - 'a']++;
    }

    total_anagrams = factorial(len); 

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 1) {
            total_anagrams /= factorial(freq[i]);
        }
    }

    printf("Number of anagrams: %llu\n", total_anagrams);

    return 0;
}
