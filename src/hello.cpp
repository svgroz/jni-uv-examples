#include <iostream>

#include <uv.h>

int main() {
    uv_loop_t * loop = uv_default_loop();
    std::cout << "Hello local!!!" << std::endl;
    return 0;
}
