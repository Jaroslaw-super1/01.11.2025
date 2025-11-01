#include <iostream>

int ** make(int rows, int cols) {

}

void output(const int * const * mtx) {

}

void rm(const int * const * mtx, int r) {
    for (size_t i = 0; i < r; i++) {
        delete[] mtx[i];
    }
}



int main() {
    int rows = 0, cols = 0;
    std::cin >> rows >> cols;
    if (std::cin.fail()) {
        return 1;
    }
    int ** mtx = nullptr;
    mtx = make(rows, cols);
    output(mtx);
    rm(mtx, rows);

    return 0;
}
