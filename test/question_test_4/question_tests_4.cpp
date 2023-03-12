#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("testing palindromes") {
    REQUIRE(is_palindrome("abcba") == true);
    REQUIRE(is_palindrome("hannah") == true);

}

TEST_CASE("Testing  non palindrome") {
    REQUIRE(is_palindrome("abc") == false);
    REQUIRE(is_palindrome("hanna") == false);
}
