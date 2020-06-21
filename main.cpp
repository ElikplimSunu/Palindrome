/*This program checks if a number is a palindrome or not and gives you the values
to append to the number if it is not*/

#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

//function to convert from integer to string
  string convertToString(unsigned long long int number){
        //changing the reversed number into string for easy manipulation
         stringstream ss;
         ss << number;
         string stringManip;
         ss >> stringManip;
         return stringManip;
        }



int main()
{
char userInput;

do {
        system("CLS");

    unsigned long long int n, number, digit, reverseNumber = 0;


     cout << "Enter a positive number: ";
     cin >> number;

     if(number > 0){

     // the n variable stores the original number while the number is being manipulated
     n = number;


     //loop to reverse the original number
     do
     {
         digit = number % 10;
         reverseNumber = (reverseNumber * 10) + digit;
         number /= 10;
     } while (number != 0);

     cout << " The reverse of the number is: " << reverseNumber << endl;

     //checking to see if the reversed number matches the original number
     if (n == reverseNumber)
         cout << " The number is a palindrome.";
     else {

        cout << " The number is not a palindrome. \n \n Therefore: ";

        //concatenating the string of the original number and the string of the reversed, manipulated number
        string finalString;
        finalString = convertToString(n) + convertToString(reverseNumber);

        //changing the string back to integer
        unsigned long long int finalManip;
        istringstream(finalString) >> finalManip;



        cout << " The value " << reverseNumber << " needs to be appended to the original number to make it a palindrome." << endl;
        cout << " And when appended it becomes: " << finalManip;
     }


    } else {
            cout << "The number you entered is invalid!";}

     cout << "\n \n Would you like to run the program again? Press Y to run again and any other key to quit. ";
     cin >> userInput;


} while(userInput == 'y');

    return 0;
}
