//
// Created by moxirboy on 10/17/24.
//
#include <stdio.h>
#include "vector.h"

int main() {
    Vector3 v1 = {1.0, 2.0, 3.0};
    Vector3 v2 = {4.0, 5.0, 6.0};

    Vector3 sum = vector_add(v1, v2);
    printf("Sum: (%f, %f, %f)\n", sum.x, sum.y, sum.z);

    Vector3 sub = vector_sub(v1, v2);
    printf("Sub: (%f, %f, %f)\n", sub.x, sub.y, sub.z);

    float dot = vector_dot(v1, v2);
    printf("Dot: %f\n", dot);

    Vector3 cross = vector_cross(v1, v2);
    printf("Cross: (%f, %f, %f)\n", cross.x, cross.y, cross.z);

    return 0;
}
