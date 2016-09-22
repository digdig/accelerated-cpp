#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
using std::cout;    using std::cin;
using std::endl;    using std::string;
using std::streamsize;  using std::setprecision;
int main()  {
    cout << "Please enter your first name:\n";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "please enter your midterm and final grades," 
        " separate by space:" << endl;
    double mid_grade, final_grade;
    cin >> mid_grade >> final_grade;

    cout << "please enter all your homework grades, " 
        "seperate by space, type 'end' when finish:"<< endl;
    double sum = 0;
    int count = 0;
    double x;
    while(cin >> x)    {
        count += 1;
        sum += x;
    }

    streamsize prec = cout.precision();

    cout << "Your final grade is:" << setprecision(3) 
        << 0.2 * mid_grade + 0.4 * final_grade + 0.4 * sum /count 
        << setprecision(prec) << endl;
    return 0;
}
