#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    const std::string greetings = "Hello, " + name + "!";

    const std::string spaces(greetings.size(),' ');
    const std::string line2 = "* " + spaces + " *";
    const std::string line3 = "* " + greetings + " *";
    const std::string line1(line2.size(),'*');

    std::cout << line1 << std::endl;
    std::cout << line2 << std::endl;
    std::cout << line3 << std::endl;
    std::cout << line2 << std::endl;
    std::cout << line1 << std::endl;
    return 0;
}
