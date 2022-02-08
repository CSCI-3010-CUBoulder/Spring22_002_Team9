#include CATCH_CONFIG_MAIN
#include <vector>
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "Products are computed", "[Product]" ) {
    REQUIRE( Product(vector<int>{1}}) == 1 );
    REQUIRE( Product(vector<int>{1,2}) == 2 );
    REQUIRE( Product(vector<int>{1,2,3} == 6 );
    REQUIRE( Product(vector<int>{1,2,3,4} == 24 );
}