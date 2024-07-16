# include "iostream"
# include "string"

int sum(int a, int b) {
    int result;
    result = a + b;
    return result;
}

int subtraction(int a, int b) {
    int result;
    result = a - b;
    return result;
}
int multiplication(int a, int b) {
    int result;
    result = a * b;
    return result;
}
int division(int a, int b) {
    int result;
    result = a / b;
    return result;
}
int main() {
    int a, b;
    std::cout << "type two numbers" << std::endl;
    std::cin >> a; 
    std::cin >> b; 

    std::cout << "what do you want? +, -, *, /" << std::endl;
    std::string calculation_type;
    std::cin >> calculation_type;

    int result; 

    if(calculation_type == "+") {
        result = sum(a,b);
    }else if(calculation_type == "-"){
        result =subtraction(a,b);
    }else if(calculation_type == "*"){
       result = multiplication(a,b);
    }else if(calculation_type == "/"){
       result = division(a,b);
    }else {
        std::cout << "Not supported" << std::endl;
    }

    std::cout << result << std::endl;
}
