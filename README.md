# test-template

### Exercise 1

Implement the functions located in `include/exercise1.hpp`.

### Exercise 2

Create a struct/class `Vector3` in the `ais2203`namespace within the file `include/exercise2.hpp`.
The struct/class should have public members x,y and z of type float. They must be initialized to 0 by default.


### Exercise 3

A class named `Greeter` has been defined in the header `exercise3.hpp`, however, its functions has only been declarred and not implmented yet.
Your task is to generate the missing body for the defined constructor/functions.
The function `make_greet` must return a string that equals to 'Hello, <insert_name>!', where <insert_name> should be replaced with the name either passed though the constructor or later set using _set_name_.

In order to successfully run individual tests (ignoring compile errors in other tests) locally, you can configure the IDE or run `./build_and_test.sh` with the test number as an argument. E.g. `./build_and_test.sh 1`
