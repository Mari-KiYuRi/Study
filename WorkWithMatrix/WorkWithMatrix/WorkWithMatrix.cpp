﻿#include <iostream>

const int columns = 7;
const int rows = 7;

void PrintMatrix(int** matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void FillingMatrix(int** matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 26 - 14;
        }
    }
}


int main()
{
    srand(time(NULL));

    int** Matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        Matrix[i] = new int[columns];
    }

    FillingMatrix(Matrix);

    PrintMatrix(Matrix);

}
