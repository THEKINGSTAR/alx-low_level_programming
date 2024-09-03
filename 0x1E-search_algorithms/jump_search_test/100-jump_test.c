#include <stdio.h>
#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value) {
    int step = (int)sqrt(size);
    int prev = 0;

    if (array == NULL) {
        return -1;
    }

    printf("Value checked array[0] = [%d]\n", array[0]);

    while (array[step] < value && step < (int)size) {
        prev = step;
        step += (int)sqrt(size);

        if (prev >= (int)size) {
            return -1;
        }

        printf("Value checked array[%d] = [%d]\n", step, array[step]);
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    while (array[prev] < value && prev < (int)size) {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev++;
    }

    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

    if (array[prev] == value) {
        printf("Found %d at index: %d\n", value, prev);
        return prev;
    }

    return -1;
}

