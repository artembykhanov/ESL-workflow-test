#include <stdio.h>
#include "vector.h"

int main()
{

 float test_values[][3] = {
        {5.0, 5.0, 5.0},
        {10.0, 10.0, 10.0},
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < num_tests - 1; i++) {
        Vector vector1 = {test_values[i][0], test_values[i][1], test_values[i][2]};
        Vector vector2 = {test_values[i + 1][0], test_values[i + 1][1], test_values[i + 1][2]};

        Vector vector_sum = sum(vector1, vector2);
        Vector vector_sub = sub(vector1, vector2);
        Vector vector_cross = cross(vector1, vector2);
        float vector_dot = dot(vector1, vector2);

        printf("Test %d:\n", i + 1);
        printf("Initial vector1 = {%.2f, %.2f, %.2f}\n", vector1.x, vector1.y, vector1.z);
        printf("Initial vector2 = {%.2f, %.2f, %.2f}\n\n", vector2.x, vector2.y, vector2.z);

        printf("Sum: (%.2f, %.2f, %.2f)\n", vector_sum.x, vector_sum.y, vector_sum.z);
        printf("Sub: (%.2f, %.2f, %.2f)\n", vector_sub.x, vector_sub.y, vector_sub.z);
        printf("Cross product: (%.2f, %.2f, %.2f)\n", vector_cross.x, vector_cross.y, vector_cross.z);
        printf("Dot product: %.2f\n", vector_dot);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }

    return 0;
}
