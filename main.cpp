#include <iostream>
using namespace std;

//problem 1
// int powerFunction(int base, int exp) {
//     if (exp == 0) {return 1;}
//     else {return base * powerFunction(base, exp - 1);}
// }
// int main() {
//     int power, exp;
//     cin >> power >> exp;
//     cout << powerFunction(power, exp) << endl;
// }

//problem 2
// int reverse(int number, int reversed = 0) {
//     if (number == 0) {return reversed;}
//     else {
//         int digit = number % 10;
//         reversed = reversed * 10 + digit;
//         return reverse(number / 10, reversed);
//         }
// }
// int main() {
//     int number;
//     cin >> number;
//     cout << reverse(number);
// }

//problem 3
bool palindromeChecker(int number, int reversed = 0) {
    static int num = number;
    if (number < 0) {
        return false;
    }
    else {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        return palindromeChecker(number % 10, reversed);
    }

}
// int main() {
//     int number;
//     cin >> number;
//     cout << palindromeChecker(number);
// }

//problem 4
// bool primeChecker(int number, int divisor) {
//     if (number % 2 == 0 || number <= 1) {
//         return false;
//     }
//     if (divisor * divisor > number) {
//         return true;
//     }
//     if (number % divisor == 0) {
//         return false;
//     }
//     return primeChecker(number, divisor + 1);
// }
// int main() {
//     int number;
//     cin >> number;
//     cout << primeChecker(number, 2);
// }

//problem 5
// int evenNumber(int number, int count) {
//     if (number == 0) {return count;}
//     else {
//         int temp = number % 10;
//         if (temp % 2 == 0) {
//             count++;
//         }
//         return evenNumber(number / 10, count);
//     }
// }
// int main() {
//     int number;
//     cin >> number;
//     cout << evenNumber(number, 0);
// }

//problem 6
// int productOfDigits(int number) {
//     if (number == 0) {return 1;}
//     else {
//         return number % 10 * productOfDigits(number / 10);
//     }
// }
// int main() {
//     int number;
//     cin >> number;
//     cout << productOfDigits(number);
// }

//problem 7
int powerOfTwoChecker(int number, int power) {
    if (number == 0) {
        return 0;
    }
    if (number == pow(2, power)) {
        return 1;
    }
    else {return powerOfTwoChecker(number, power + 1);}
}
int main() {
    int number;
    cin >> number;
    cout << powerOfTwoChecker(number, 2);
}
//problem 8


//problem 9


//problem 10
// int powerFunction(int base, int exp) {
//     if (exp == 0) {return 1;}
//     else {
//         if (exp % 2 == 0) {return powerFunction(base, exp /2) * powerFunction(base, exp / 2);}
//         else {return base * powerFunction(base, exp - 1);}
//     }
// }
// int main() {
//     int power, exp;
//     cin >> power >> exp;
//     cout << powerFunction(power, exp) << endl;
// }