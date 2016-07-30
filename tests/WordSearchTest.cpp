#include "Catch/single_include/catch.hpp"

#include "WordSearch.hpp"

TEST_CASE("Word Search") {
    std::vector<std::vector<char>> board =
    {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    std::string s1 = "ABCCED", s2 = "SEE", s3 = "ABCB";

    REQUIRE(wordExist(board, s1) == true);
    REQUIRE(wordExist(board, s2) == true);
    REQUIRE(wordExist(board, s3) == false);
}
