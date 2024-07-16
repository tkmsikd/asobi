#include <iostream> 
#include <algorithm> 
#include <iterator>

//整数の配列を宣言し、その要素を逆順に出力する
int main() {
    int numbers[] = {1,2,3,4,5};
    const int numbers_size = std::size(numbers); 

    std::reverse(numbers, numbers+numbers_size);

    for(int i=0; i < numbers_size; i++) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}