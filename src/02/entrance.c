#include <assert.h>
#include "insertion_sort.c"

int main()
{
    long inputs[] = {3, 5, 1, 2, 4, 1};
    insertion_sort(inputs, 6);
    assert(inputs[0] == 1);
    assert(inputs[1] == 1);
    assert(inputs[2] == 2);
    assert(inputs[3] == 3);
    assert(inputs[4] == 4);
    assert(inputs[5] == 5);

    return 0;
}
