#include "exercise1.hpp"

#include <cstdlib>
#include <numeric>

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

TEST_CASE("3: compute sum")
{
    const int num = 100;
    std::vector<int> integers(num);
    for (int i = 0; i < num; i++) {
        integers.emplace_back(rand() % 100); // element in the range 0 to 99
    }

    int sum = std::accumulate(integers.begin(), integers.end(), 0);
    REQUIRE(sum == ais2203::computeSum(integers));

}
