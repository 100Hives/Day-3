// Learning C++ thorugh W3 schools
#include <iostream>
using namespace std;

int main(){// main is just a function
    std::cout << "Hello WWorld!" << "\n";
    std::cout << "Have a good day!" << std::endl;
    std::cout << "Learning c++";


/* This is used to do multi line comment,
    while the two dashes "//"
    are used to do a single line comment*/

// The syntax for varialbes is "Type VariableName = Value;"

string name = "Bob";
int Age = 25;
char Initial = 'B';
double bankBalance = 111.11;
bool proSubscription = true;

cout << "Hey "<< name << " your bank balance is " << bankBalance;

double deposit = 777.77;

double totalBalance = bankBalance + deposit;

cout << totalBalance;


// declaring multiple variables
int x = 5, y = 6, z = 50;
cout << x + y + z;

//assigning the same value to mulitple variables

int x, y, z;
x = y = z = 50;
cout << x + y + z;

//always use const to declare constant varialbes like value of pi or minues per hour etc
const int minutesPerHour = 60;
const float Pi2DP = 3.14;

//note you can declare a variable without a value but a constant will always need to be assigned a value when  declared

return 0;
}

