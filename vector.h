//
// Created by moxirboy on 10/17/24.
//

#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x, y, z;
} Vector3;

Vector3 vector_add(Vector3 v1, Vector3 v2);
Vector3 vector_sub(Vector3 v1, Vector3 v2);
float vector_dot(Vector3 v1, Vector3 v2);
Vector3 vector_cross(Vector3 v1, Vector3 v2);


#endif //VECTOR_H
