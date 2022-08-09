#ifndef EXAMPLE_APP_TEST_H
#define EXAMPLE_APP_TEST_H
#include <stdio.h>

typedef struct {
    float value;
} Item;

extern "C" {
float tensor_sum(Item** field1, Item** field2);
}

#endif //EXAMPLE_APP_TEST_H
