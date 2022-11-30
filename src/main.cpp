#include <iostream>

#include <entity.hpp>
#include <vec2.hpp>
#include <c_transform.hpp>

#include <cmath>
#include <string>

int main(int argc, char **argv) {
    auto a = Vec2(1, 2);
    auto b = Vec2(3, 4);
    auto c = Vec2(5, 6);
    auto d = Vec2(1, 1);
    auto tr = TransformC(a, b, c, d);

    tr.pos.x += 1;

    std::cout << std::string(a) << '\t' << std::string(tr.pos) << std::endl;

    return 0;
}

/*

Entity
--> type
--> UUID

Component
--> &Entity

*/