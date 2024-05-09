#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

typedef struct {
    int rootCount;
    double root1;
    double root2;
} Roots;

Roots solve_equation(double a, double b, double c);

#endif  // QUADRATIC_EQUATION_H