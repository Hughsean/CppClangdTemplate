//-DCMAKE_TOOLCHAIN_FILE=D:/Env/Vcpkg/scripts/buildsystems/vcpkg.cmake

#include <cstdint>
#include <iostream>
#include <map>
#include <string>
auto main() -> int {
    auto m = std::map<std::string, int32_t>{ { "123", 12 }, { "中文", 121 } };
    for (auto&& e : m) {
        std::cout << e.first << " : " << e.second << '\n';
    }
}