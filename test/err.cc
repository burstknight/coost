#include "co/all.h"

int main(int argc, char** argv) {
    flag::init(argc, argv);
    log::init();

    for (int i = 0; i < 128; ++i) {
        COUT << "error: " << i << "  str: " << co::strerror(i);
    }

    return 0;
}
