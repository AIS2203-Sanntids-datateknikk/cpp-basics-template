
#ifndef TEST_EXERCISE_EXERCISE4_HPP
#define TEST_EXERCISE_EXERCISE4_HPP

#include <string>
#include <utility>

namespace ais2203
{

struct Person
{
    std::string firstName;
    std::string lastName;

    Person(std::string firstName, std::string  lastName)
        : firstName(std::move(firstName))
        , lastName(std::move(lastName))
    { }

    virtual std::string make_greet() const = 0;

    virtual ~Person() = default;
};

 struct Student : Person
{

     Student(const std::string& firstName, const std::string& lastName)
         : Person(firstName, lastName)
     { }

     // TODO Implement missing function make_greet() so that the function returns a string that contains the word 'student' and the students first name.

};

} // namespace ais2203

#endif // TEST_EXERCISE_EXERCISE4_HPP
