#define CATCH_CONFIG_RUNNER

#include <catch.hpp>
#include <glm/vec3.hpp>
#include "box.hpp"
#include "sphere.hpp"
#include <iostream>

TEST_CASE("test sphere area", "[sphere]") {
    Sphere s1{ {1, 1, 1}, 2.0f };
    float area = s1.area();
    REQUIRE(area == Approx(50.265f));

    Sphere s2{ {1, 1, 1}, 0.0f };
    area = s2.area();
    REQUIRE(area == Approx(0.0f));

    Sphere s3{ {1, 1, 1}, -2.0f };
    area = s3.area();
    REQUIRE(area == -1.0f);
}

TEST_CASE("test sphere volume", "[sphere]") {
    Sphere s1{ {1, 1, 1}, 3.0f };
    float volume = s1.volume();
    REQUIRE(volume == Approx(113.097f));

    Sphere s2{ {1, 1, 1}, 0.0f };
    volume = s2.volume();
    REQUIRE(volume == Approx(0.0f));

    Sphere s3{ {1, 1, 1}, -2.0f };
    volume = s3.volume();
    REQUIRE(volume == -1.0f);
}

TEST_CASE("test box area", "[area]") {
    Box b1{ {1, 1, 1}, {2, 2, 2 } };
    float area = b1.area();
    REQUIRE(area == 6.0f);
}

TEST_CASE("test box volume", "[area]") {
    Box b1{ {1, 1, 1}, {2, 2, 2 } };
    float area = b1.volume();
    REQUIRE(area == 1.0f);
}

int main(int argc, char *argv[])
{
    Box b{ "Box", {128, 128, 128}, {5, 5, 5}, {10, 10, 10} };
    std::cout << b << std::endl;

    Sphere s{ "Sphere", {128, 128, 128}, {0, 0, 0}, 5.0f };
    std::cout << s << std::endl;

    return Catch::Session().run(argc, argv);
}
