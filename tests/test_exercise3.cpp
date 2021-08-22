
#include "exercise3.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("1: Implement hpp definitions in cpp")
{

    ais2203::Greeter greeter("Per");
    REQUIRE(greeter.make_greeting() == "Hello, Per!");

    greeter.set_name("Ola");
    REQUIRE(greeter.make_greeting() == "Hello, Ola!");
}
