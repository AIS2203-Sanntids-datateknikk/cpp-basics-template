
#include "exercise2.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("1: Create class")
{
    ais2203::Vector3 v;

    REQUIRE(v.x == Approx(0));
    REQUIRE(v.y == Approx(0));
    REQUIRE(v.z == Approx(0));
}

TEST_CASE("2: Class variables are assignable")
{
    ais2203::Vector3 v;

    float a = 1;
    float b = 2;
    float c = 3;

    v.x = a;
    v.y = b;
    v.z = c;

    REQUIRE(v.x == Approx(a));
    REQUIRE(v.y == Approx(b));
    REQUIRE(v.z == Approx(c));
}
