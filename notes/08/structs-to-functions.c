#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price) {
    // * dot operator works on structs, but not pointers to structs
    // * we can dereference the var to de-pointer it to get to the struct itself, but it's kinda jank and ugly
    // * instead, we used the ultra cool "arrow operator"

    c->price = new_price;
    // accesses c and points to price, and assigns it the value of new_price
}

int main(void)
{
    // price isn't defined, so price is 0  
    struct car saturn = {.speed=175, .name="Saturn SL\2"};

    set_price(&saturn, 799.99);

    printf("Price: %f\n", saturn.price);

    return 0;
}

// when accessing a struct field, use dot (.)
// when accessing a field in a struct pointer, use arrow (->)
