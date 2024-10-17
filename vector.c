#include "vector.h"

// Сумма
Vector sum(Vector vector1, Vector vector2)
{
    Vector result = {vector1.x + vector2.x, vector1.y + vector2.y, vector1.z + vector2.z};
    return result;
}

// Разность
Vector sub(Vector vector1, Vector vector2)
{
    Vector result = {vector1.x - vector2.x, vector1.y - vector2.y, vector1.z - vector2.z};
    return result;
}

// Векторное произведение
Vector cross(Vector vector1, Vector vector2)
{
    Vector result = {
        vector1.y * vector2.z - vector1.z * vector2.y,
        vector1.z * vector2.x - vector1.x * vector2.z,
        vector1.x * vector2.y - vector1.y * vector2.x};
    return result;
}

// Скалярное прроизведение
float dot(Vector vector1, Vector vector2)
{
    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
}