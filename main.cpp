#include "header.h"

int main()
{

    Circle a(3, 3, 2);
    Circle b(a);

    Vector c(2, 3, 4, 5);
    Vector d(c);

    Complex x1(3, 4);
    Complex x2(5, 5);

    return 0;
}