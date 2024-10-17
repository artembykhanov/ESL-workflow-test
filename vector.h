#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct
{
    float x, y, z;
} Vector;

Vector sum(Vector vector1, Vector vector2);
Vector sub(Vector vector1, Vector vector2);
float dot(Vector vector1, Vector vector2);
Vector cross(Vector vector1, Vector vector2);

#endif
