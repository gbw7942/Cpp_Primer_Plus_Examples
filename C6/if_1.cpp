#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int spaceCount = 0;
    int charCount = 0;

    for (std::string::iterator it = input.begin(); it != input.end(); ++it) {
        char ch = *it;
        if (ch == ' ') {
            spaceCount++;
        } else {
            charCount++;
        }
    }

    std::cout << "Number of spaces: " << spaceCount << std::endl;
    std::cout << "Number of characters: " << charCount << std::endl;

    return 0;
}
