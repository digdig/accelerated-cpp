#include <iostream>
#include <string>
using std::cout;    using std::cin; 
using std::endl;    using std::string;
int main()  {
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";
    const int pad = 3;
    const int rows = 2*pad + 3;
    const string::size_type cols = 2*pad + 2 + greeting.size();
    
    std::cout << '\n';

    for(int r = 0; r != rows; ++r)   {
        int c = 0;
        while(c!=cols)  {
            //when r = 0, we are writing the first row.
            if(c == pad+1 && r == pad+1) {
                cout << greeting;
                c += greeting.size();
            }
            else    {
                if(r == 0 || r == rows-1 || c == 0 || c == cols-1)  {
                    cout << '*';
                }
                else    {
                    cout << ' ';
                }
                ++c;
            }
        }
        cout << '\n';
    }

    cout << endl;

    return 0;

}
