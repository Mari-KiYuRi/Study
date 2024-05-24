#include <iostream>

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

void FindNumbeNegativeElements(int** matrix) {
    int countNegativeElements{};
    for (int i = 0; i < rows; i++) {
        if (matrix[i][i] < 0) {
            countNegativeElements++;
        }
    }
    std::cout << "Количество отрицательных элементов на главной диагонали: " << countNegativeElements << "\n";
}

void FillingMatrix(int** matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 26 - 14;
        }
    }
}

void ReplacingElements(int** matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < columns; j++) {
            if (matrix[i][j] > 0) {
                matrix[i][j] = 0;
            }
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

    FindNumbeNegativeElements(Matrix);

    ReplacingElements(Matrix);
}
