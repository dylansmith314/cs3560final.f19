#define CATCH_CONFIG_MAIN
#include "catch.hpp"


int countChar(std::string str1){
    return str1.length();
}

int countLine(std::string str2){
    int count = 1;
    if(str2 == "") {
        return 0;
    }
    for(int i = 0; i < str2.size(); i++) {
        if(str2[i] == '\n') {
            count++;
        }
    }
    return count;
}

//Testing pass for characters in a name
TEST_CASE("Verifying # of Characters is right using countChar") {
    std::string s1 = "Dylan";
  REQUIRE(countChar(s1) == 5);
}

//Testing pass for characters in an empty string
TEST_CASE("Testing countChar to return the right output"){
    std::string s1 = "";
  REQUIRE(countChar(s1) == 0);
}

//Testing pass for lines in a name
TEST_CASE("Verifying # of Lines is right using countLine") {
    std::string s1 = "Ohio";
  REQUIRE(countLine(s1) == 1);
}

//Testing pass for lines in an empty string
TEST_CASE("Testing countLine to return the right output"){
    std::string s1 = "";
  REQUIRE(countLine(s1) == 0);
}
