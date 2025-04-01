#include "split.h"
#include <stdlib.h>


static int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

char **split(char *str) {
    int word_count = 0;
    int in_word = 0; // if a word
    char *ptr = str;
    while (*ptr != '\0') {
        if (!is_space(*ptr)) {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
        ptr++;
    }
    if (word_count == 0) {
        char **result = malloc(sizeof(char *));
        if (result == NULL) {
            return NULL;
        }
        result[0] = NULL;
        return result;
    }

    char **result = malloc((word_count + 1) * sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    int word_index = 0;
    ptr = str;
    in_word = 0;
    char *word_start = NULL;
    while (*ptr != '\0') {
        if (!is_space(*ptr)) {
            if (!in_word) {
                word_start = ptr;
                in_word = 1;
            }
        } else if (in_word) {
            int word_length = ptr - word_start;
            result[word_index] = malloc(word_length + 1);
            if (result[word_index] == NULL) {
                for (int i = 0; i < word_index; i++) {
                    free(result[i]);
                }
                free(result);
                return NULL;
            }
            for (int i = 0; i < word_length; i++) {
                result[word_index][i] = word_start[i];
            }
            result[word_index][word_length] = '\0';
            word_index++;
            in_word = 0;
        }
        ptr++;
    }

    if (in_word) {
        int word_length = ptr - word_start;
        result[word_index] = malloc(word_length + 1);
        if (result[word_index] == NULL) {
            for (int i = 0; i < word_index; i++) {
                free(result[i]);
            }
            free(result);
            return NULL;
        }
        for (int i = 0; i < word_length; i++) {
            result[word_index][i] = word_start[i];
        }
        result[word_index][word_length] = '\0';
        word_index++;
    }

    result[word_index] = NULL;

    return result;
}