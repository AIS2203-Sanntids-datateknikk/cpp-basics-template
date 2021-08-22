#include "exercise1.hpp"

#include <cstdlib>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("1: multiplyDoubles doubles")
{
    double a = rand() % 100; // a in the range 0 to 99
    double b = rand() % 100; // b in the range 0 to 99
    REQUIRE(ais2203::multiplyDoubles(a, b) == Approx(a * b));
}

TEST_CASE("2: assign hello to reference")
{
    std::string str;
    ais2203::assignHelloToStringReference(str);
    REQUIRE(str == "hello");
}
