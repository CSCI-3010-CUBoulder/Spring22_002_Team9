#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Signs are correct", "[sign]"){
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
}

