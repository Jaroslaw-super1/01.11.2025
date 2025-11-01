#include <iostream>


void rm(const int * const * mtx, int r) {
    for (size_t i = 0; i < r; i++) {
        delete[] mtx[i];
    }
}

int ** make(int r, const size_t * lns) {
    int ** mtx = new int * [r];
    for (size_t i = 0; i < r; i++) {
        try {
            mtx[i] = new int[lns[i] - 1];
        } catch (const std::bad_alloc&) {
            rm(mtx, i);
            throw;
        }
    }
    return mtx;
}

//void output(const int * const * mtx, int r, int c) {
//    for (size_t i = 0; i < r; i++) {
//        for (size_t j = 0; j < c; j++) {
//            std::cout << mtx[i][j];
//        }
//        std::cout << "\n";
//    }
//}



void input(int ** mtx, int r, int c) {

    for (size_t i = 0; i < r; i++) {
        for (size_t j = 0; j < c; j++) {
            std::cin >> mtx[i][j];
        }
    }
}


/*
int t[] = {5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 8};
size_t lns[] = {4, 2, 5,1};

rows - элементов
t - массив с элементами
lns - массив с количеством элементов  в каждо строке

*/
int ** convert(const int * t, size_t n, const size_t * lns, size_t rows) {
    int ** new_mtx = nullptr;
    new_mtx = make(rows, lns);
    return new_mtx;
}

int main() {
    
    int t1[] = {5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 8};
    size_t lns1[] = {4, 2, 5,1};
    size_t rows = 4;
    size_t n = 1;

    int * t = t1;
    size_t * lns = lns1;
    
    int ** mtx = nullptr;
    try {
        mtx = convert(t, n, lns, rows);
    } catch (const std::bad_alloc&) {
        rm(mtx, rows);
        return 2;
    }

    std::cout << mtx;

    //if (std::cin.fail()) {
    //    rm(mtx, rows);
    //    return 1;
    //}
    //output(mtx, rows, cols);
    
    rm(mtx, rows);

    return 0;
}




/*
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

//void output(const int * const * mtx, int r, int c) {
//    for (size_t i = 0; i < r; i++) {
//        for (size_t j = 0; j < c; j++) {
//            std::cout << mtx[i][j];
//        }
//        std::cout << "\n";
//    }
//}

void rm(const int * const * mtx, int r) {
    for (size_t i = 0; i < r; i++) {
        delete[] mtx[i];
    }
}

void input(int ** mtx, int r, int c) {

    for (size_t i = 0; i < r; i++) {
        for (size_t j = 0; j < c; j++) {
            std::cin >> mtx[i][j];
        }
    }
}



int t[] = {5, 5, 5, 5,6, 6, 7, 7, 7,7,7, 8};
size_t lns[] = {4, 2, 5,1};
или так все-такие?

rows - элементов
t - массив с элементами
lns - массив с количеством элементов  в каждо строке


int ** convert(const int * t, size_t n, const size_t * lns, size_t rows) {
    new_mtx = 

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
    input(mtx, rows, cols);
    if (std::cin.fail()) {
        rm(mtx, rows);
        return 1;
    }
    //output(mtx, rows, cols);
    rm(mtx, rows);

    return 0;
}
*/
