/*
 *
 * Filename        : tests.cpp
 * FileType        : C++ Source File
 * Author          : Nisha Poswal
 * CreatedOn       : 20/05/2019
 * CopyRights      : Airavath Foundation
 * Description     : Tests file containing test cases of the project. This file
 *                   includes the common headers.
 *                   It also includes catch.hpp for catch2 header file.
*/
/*
* retrued_result - a vector<string> type returned by dictionaryOrder() which contains words arranged in dictionary order.
* expected result - a vector<string> type which is expected to b answer of funtion ten_words.
*/


/*Including the headers for different functions.*/

#define CATCH_CONFIG_MAIN
#include"catch2header/catch.hpp"
#include"code.cpp"

TEST_CASE("Number of words in vector should not be less than 10") {
	SECTION("Number of words is 9 is 0(pass)") {
		vector<string>V;
		V = { "nisha","pandey","simran","avantika","navneet","nikhil","krishna","monika","neha" };
		REQUIRE(checkSize(V) == 0);
	}
	SECTION("Number of words is 2 is 0(pass)") {
		vector<string>V;
		V = { "nisha","pandey" };
		REQUIRE(checkSize(V) == 0);
	}
}
TEST_CASE("Number of words should not be more than 10") {
	SECTION("Number of words is 11 is 0(pass)") {
		vector<string>V;
		V = { "nisha","pandey","simran","avantika","navneet","nikhil","krishna","monika","neha","pandey","chanchal" };
		REQUIRE(checkSize(V) == 0);
	}
	SECTION("Number of words is 10 is 1(pass)") {
		vector<string>V;
		V = { "nisha","pandey","simran","avantika","navneet","nikhil","krishna","monika","neha","chancha" };
		REQUIRE(checkSize(V) == 1);
	}

}

TEST_CASE("All words should be arranged in dictionary order") {

	SECTION("All different words should be arranged in dictionary order(pass)") {
		vector<string>V, expected_result, returned_result;
		V = { "nisha","pandey","simran","avantika","navneet","nikhil","krishna","monika","neha","chanchal" };
		returned_result = dictionayOrder(V);
		expected_result = { "avantika","chanchal","krishna","monika" ,"navneet","neha","nikhil","nisha","pandey","simran" };

		REQUIRE(returned_result == expected_result);
	}
	SECTION("All words with same charactor but different length should be arranged in dictionary order(pass)") {
		vector<string>V, expected_result, returned_result;
		V = { "aa","aaaa","a","aaa","aaaaaaa","aaaaa","aaaaaaaa","aaaaaa","aaaaaaaaa","aaaaaaaaaa" };
		returned_result =dictionatyOrder(V);
		expected_result = { "a","aa","aaa","aaaa" ,"aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa" };
		REQUIRE(expected_result == returned_result);

	}
	SECTION("All words with same first charactor should be arranged in dictionary order(pass)") {
		vector<string>V, expected_result, returned_result;
		V = { "aa","aane","aaoab","aaab","aaba","aaesr","aae","aasr","aakar","aab" };
		returned_result = dictionaryOrder(V);
		expected_result = { "aa","aaab","aab","aaba","aae","aaesr","aakar","aane","aaoab","aasr" };
		REQUIRE(expected_result == returned_result);

	}

}
