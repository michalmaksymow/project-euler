#include <vector>

namespace util {
namespace debug {
template<typename T>
void printVectorContents(const std::vector <T> vector) {
    for (const auto &element: vector) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;
}
}
}
