
#ifndef TEST_EXERCISE_EXERCISE3_HPP
#define TEST_EXERCISE_EXERCISE3_HPP

#include <string>

// In the following a definitions for class "Greeter" has been typed. However, it has no implementation yet.
// In order to exercise3 compile and pass the test(s), implement the constructor body and missing functions in src/exercise3.cpp

namespace ais2203
{

class Greeter
{

public:
    Greeter(const std::string& name);

    std::string make_greeting();

    void set_name(const std::string &name);

private:
    std::string name_;
};


} // namespace ais2203

#endif // TEST_EXERCISE_EXERCISE3_HPP
