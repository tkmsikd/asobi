#include <iostream>
#include <string>
#include <algorithm>

// ユーザーから文字列を入力として受け取り、
// その文字列に含まれる母音の数を数えるプログラムを書いてください。

int main()
{
    std::cout << "Type in something. We will count vowels" << std::endl;
    std::string typed_word;
    std::getline(std::cin, typed_word);

    std::string const vowels = "aiueoAIUEO";

    int count = 0;

    for (char c : typed_word)
    {
        if (vowels.find(c) != std::string::npos)
        {
            count++;
        }
    }

    std::cout << count << "vowels counted" << std::endl;
}
