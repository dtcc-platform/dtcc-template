#include "addition.h"
#include "subtraction.h"

TEST_CASE("Foo")
{
    int x = 1;
    int y = 2;

    SECTION("Addition")
    {
        int z = 3;
        REQUIRE(add(x, y) == z);
    }

    SECTION("Subtraction")
    {
        int z = -1;
        REQUIRE(sub(x, y) == z);
    }
}
