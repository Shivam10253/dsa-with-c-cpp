// creating a structure of Rectangle
struct Rectangle {
    int length; // takes 2 or 4 bytes
    int breadth; // takes 2 or 4 bytes

};

#include <stdio.h>

int main() {
    // struct Rectangle r; // declaration
    struct Rectangle r = {10, 5}; // declaration + initialization

    // Accessing a member to modify
    // r.length = 15;
    // r.breadth = 10;

    // Printing an Area of Rectangle
    printf("Area of Rectangle is %d.", (r.length * r.breadth));

}