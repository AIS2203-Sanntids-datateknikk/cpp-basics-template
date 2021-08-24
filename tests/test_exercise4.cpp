
#include "exercise4.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <memory>

TEST_CASE("1: Implement greeting")
{

   auto s = std::make_unique<ais2203::Student>("John", "Doe");
   std::string greet = s->make_greet();

   auto find1 = greet.find("student");
   auto find2 = greet.find("John");

   REQUIRE(find1 != std::string::npos);
   REQUIRE(find2 != std::string::npos);

}
