#include <catch2/catch.hpp>

TEST_CASE("Signs are correct", "[sign]"){
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
}

