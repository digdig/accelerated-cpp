#include <iostream>
#include <string>

int main()  {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name + "!";
    const int pad = 3;
    const int rows = 2*pad + 3;
    const std::string::size_type cols = 2*pad + 2 + greeting.size();
    
    std::cout << '\n';

    for(int r = 0; r != rows; ++r)   {
        int c = 0;
        while(c!=cols)  {
            if(c == pad+1 && r == pad+1) {
                std::cout << greeting;
                c += greeting.size();
            }
            else    {
                if(r == 0 || r == rows-1 || c == 0 || c == cols-1)  {
                    std::cout << '*';
                }
                else    {
                    std::cout << ' ';
                }
                ++c;
            }
        }
    std::cout << '\n';
    }

    std::cout << std::endl;

    return 0;

}
