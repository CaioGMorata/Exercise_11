#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the input string

    //Declara uma variável para armazenar a string de entrada
    string input;

    // Ask the user to input a string

    //Peça ao usuário para inserir uma string
    cout << "Enter a string: ";
    getline(cin, input); // Using getline to read the whole line, including spaces. Usando getline para ler a linha inteira, incluindo espaços.

    // Initialize two pointers: one starting at the beginning, the other at the end of the string

    // Inicializa dois ponteiros: um começando no início e outro no final da string
    int start = 0;
    int end = input.length() - 1;

    // Loop to swap characters from the beginning and the end until the middle is reached

    // Loop para trocar caracteres do início e do fim até chegar ao meio
    while (start < end) {
        // Swap the characters at the start and end positions using addition and subtraction

        // Troca os caracteres nas posições inicial e final usando adição e subtração
        input[start] = input[start] + input[end];  // Add both characters. Adiciona os dois caracteres.
        input[end] = input[start] - input[end];    // Subtract to get the original start character. Subtraia para obter o caractere inicial original.
        input[start] = input[start] - input[end];  // Subtract to get the original end character. Subtrai para obter o caractere final original.

        // Move the pointers towards the center

        // Move os ponteiros em direção ao centro
        start++;
        end--;
    }

    // Output the reversed string

    //Saída da string invertida
    cout << "Reversed string: " << input << endl;

    return 0;
}
