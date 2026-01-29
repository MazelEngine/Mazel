namespace Mazel {
    __attribute__((visibility("default"))) void Print();
}

#include <iostream>

int main(int argc, const char * argv[]) {
    Mazel::Print();
    return EXIT_SUCCESS;
}
