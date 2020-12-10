/**
* @author Connor McElroy
* @brief This program converts decimal numbers 2,147,483,647 or less
* into binary form.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char choice = 'y';
    while (choice = = 'y')
    {
        int number;
        vector<int> digits;
        cout << "Enter number: ";
        cin >> number;
        while (number != 0)
        {
            int result = number % 2;
            number = number / 2;
            digits.push_back(result);
        }
        reverse(digits.begin(), digits.end());
        cout << "Binary form: ";
        for (long unsigned int count = 0; count < digits.size(); ++count)
        {
            cout << digits[count];
        }
        cout << endl;
        cout << "Try another number? y/n: ";
        cin >> choice;
    }
    return 0;
}
