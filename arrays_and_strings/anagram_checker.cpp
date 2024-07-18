// 2つの文字列を入力として受け取り、それらが互いにアナグラム（文字の並べ替えで同じになる単語）であるかどうかを判定するプログラム
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string first_word, second_word;
    std::cout << "Give two strings" << std::endl;
    std::cin >> first_word >> second_word;

    std::transform(first_word.begin(), first_word.end(), first_word.begin(), [](unsigned char c)
                   { return std::tolower(c); });
    std::transform(second_word.begin(), second_word.end(), second_word.begin(), [](unsigned char c)
                   { return std::tolower(c); });

    std::sort(first_word.begin(), first_word.end());
    std::sort(second_word.begin(), second_word.end());
    if (first_word == second_word)
        std::cout << "Given two words are equivalent anagram" << std::endl;

    return 0;
}