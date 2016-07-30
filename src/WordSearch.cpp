#include "WordSearch.hpp"

bool isFound(std::vector<std::vector<char>> &board, std::string word, int i, int j)
{
    if (word.length() == 0)
        return true;

    int m = board.size(), n = board[0].size();
    if (i < 0 || i >= m || j < 0 || j >= n || word[0] != board[i][j])
        return false;

    char boardij = board[i][j];
    board[i][j] = '\0';
    std::string word_next = word.substr(1, word.length() - 1);

    if (isFound(board, word_next, i, j - 1) ||
        isFound(board, word_next, i, j + 1) ||
        isFound(board, word_next, i - 1, j) ||
        isFound(board, word_next, i + 1, j))
        return true;

    board[i][j] = boardij;

    return false;
}

bool wordExist(std::vector<std::vector<char>> board, std::string word)
{
    int m = board.size(), n = board[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isFound(board, word, i, j) == true)
                return true;
        }
    }
    return false;
}

