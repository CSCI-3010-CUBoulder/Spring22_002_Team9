#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Signs are correct", "[sign]"){
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
}

TEST_CASE ( "Factorials are computed", "[factorial]") {
  REQUIRE( Factorial(0) == 0 );
  REQUIRE( Factorial(1) == 1 );
  REQUIRE( Factorial(2) == 2 );
  REQUIRE( Factorial(3) == 6 );
  REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Products are computed", "[Product]" ) {
    REQUIRE( Product(vector<int>{1}}) == 1 );
    REQUIRE( Product(vector<int>{1,2}) == 2 );
    REQUIRE( Product(vector<int>{1,2,3} == 6 );
    REQUIRE( Product(vector<int>{1,2,3,4} == 24 );
}