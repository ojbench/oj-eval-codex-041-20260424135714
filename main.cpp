#include <iostream>
#include "map.hpp"
#include "utility.hpp"

int main() {
    sjtu::map<int,int> m;
    m[1] = 2;
    if (!m.empty()) {
        volatile int x = m.begin()->second;
        (void)x;
    }
    std::cout << "OK";
    return 0;
}
