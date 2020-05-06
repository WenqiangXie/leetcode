//
// Created by wenqi on 4/16/2020.
//

#include "util.h"

void printArray(const void *base, size_t nitems, char type, char *seq) {
    switch (type) {
        case 'c':;
            {
                char *arr = (char *) base;
                for (int ii = 0; ii < nitems; ii++) {
                    printf("%c", *(arr + ii));
                    if (ii < nitems - 1)
                        printf("%s", seq);
                }
            }
            break;
        case 'd':;
            {
                int *arr = (int *) base;
                for (int ii = 0; ii < nitems; ii++) {
                    printf("%d", *(arr + ii));
                    if (ii < nitems - 1)
                        printf("%s", seq);
                }
            }
            break;
        case 'f':;
            {
                float *arr = (float *) base;
                for (int ii = 0; ii < nitems; ii++) {
                    printf("%f", *(arr + ii));
                    if (ii < nitems - 1)
                        printf("%s", seq);
                }
            }
            break;
        case 'l':;
            {
                double *arr = (double *) base;
                for (int ii = 0; ii < nitems; ii++) {
                    printf("%lf", *(arr + ii));
                    if (ii < nitems - 1)
                        printf("%s", seq);
                }
            }
            break;
    }
}