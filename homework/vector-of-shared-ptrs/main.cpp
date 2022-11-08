#include <iostream>
#include <string>
#include "vectorFunctions.hpp"

int main() {
    auto vec = generate(10);
    print(vec);
    add10(vec);
    print(vec);
    sub10(vec);
    print(vec);
    auto ptr = std::make_shared<int>(10);
    sub10(ptr.get());
    return 0;
}
