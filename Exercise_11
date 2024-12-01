#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the input string
    string input;

    // Ask the user to input a string
    cout << "Enter a string: ";
    getline(cin, input); // Using getline to read the whole line, including spaces

    // Initialize two pointers: one starting at the beginning, the other at the end of the string
    int start = 0;
    int end = input.length() - 1;

    // Loop to swap characters from the beginning and the end until the middle is reached
    while (start < end) {
        // Swap the characters at the start and end positions using addition and subtraction
        input[start] = input[start] + input[end];  // Add both characters
        input[end] = input[start] - input[end];    // Subtract to get the original start character
        input[start] = input[start] - input[end];  // Subtract to get the original end character

        // Move the pointers towards the center
        start++;
        end--;
    }

    // Output the reversed string
    cout << "Reversed string: " << input << endl;

    return 0;
}
