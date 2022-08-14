#ifndef EXAMPLE_APP_SUBTASK_H
#define EXAMPLE_APP_SUBTASK_H

#include <iostream>
#include <fstream>


extern "C" {

double **read_arr(std::string filename) {
    auto **arr = new double *[2];
    for (int i = 0; i < 2; i++) {
        arr[i] = new double[2];
    }
    std::ifstream file;
    file.open(filename);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            file >> arr[i][j];
        }
    }
    file.close();
    return arr;
}

}

#endif //EXAMPLE_APP_SUBTASK_H
