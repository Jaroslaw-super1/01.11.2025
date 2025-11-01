#include <iostream>

int ** make(int r, int c) {
    int ** mtx = new int * [r];
    for (size_t i = 0; i < r; i++) {
        try {
            mtx[i] = new int[c];
        } catch (const std::bad_alloc&) {
            rm(mtx, i);
            throw;
        }
    }
    return mtx;
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
    try {
        mtx = make(rows, cols);
    } catch (const std::bad_alloc&) {
        return 2;
    }
    
    output(mtx);
    rm(mtx, rows);

    return 0;
}
