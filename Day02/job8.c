#include "job8.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *trim_str(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;
    int len = 0;
    char *result;

    printf("Trimming string: '%s'\n", str);

    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    start = i;

    i = len - 1;
    while (i >= 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i--;
    end = i;

    printf("Found trim bounds: start=%d, end=%d\n", start, end);

    if (end < start)
        return NULL;

    result = malloc(sizeof(char) * (end - start + 2));
    if (!result)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    i = 0;
    while (start <= end)
    {
        result[i] = str[start];
        i++;
        start++;
    }
    result[i] = '\0';

    printf("Trimmed result: '%s'\n", result);
    return result;
}

void sort_strings(char **strs, int size)
{
    int i;
    int j;
    char *temp;

    printf("Sorting %d strings\n", size);
    printf("Before sorting:\n");
    for (i = 0; i < size; i++)
        printf("  strs[%d] = '%s'\n", i, strs[i]);

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            int k = 0;
            while (strs[j][k] != '\0' && strs[j + 1][k] != '\0' && strs[j][k] == strs[j + 1][k])
                k++;

            if (strs[j][k] > strs[j + 1][k])
            {
                printf("Swapping '%s' and '%s'\n", strs[j], strs[j + 1]);
                temp = strs[j];
                strs[j] = strs[j + 1];
                strs[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    printf("After sorting:\n");
    for (i = 0; i < size; i++)
        printf("  strs[%d] = '%s'\n", i, strs[i]);
}

void job8(int argc, char **argv)
{
    int i;
    char **trimmed;

    printf("Starting job8 with %d arguments\n", argc);

    if (argc < 2)
    {
        printf("No arguments to process\n");
        return;
    }

    trimmed = malloc(sizeof(char *) * argc);
    if (!trimmed)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Trimming all arguments\n");
    i = 1;
    while (i < argc)
    {
        trimmed[i - 1] = trim_str(argv[i]);
        i++;
    }

    printf("Sorting trimmed arguments\n");
    sort_strings(trimmed, argc - 1);

    printf("Printing sorted results:\n");
    i = 0;
    while (i < argc - 1)
    {
        int j = 0;
        while (trimmed[i][j] != '\0')
        {
            write(1, &trimmed[i][j], 1);
            j++;
        }

        if (i < argc - 2)
            write(1, " ", 1);

        free(trimmed[i]);
        i++;
    }

    write(1, "\n", 1);
    printf("Cleaning up\n");
    free(trimmed);
    printf("Job8 completed\n");
}