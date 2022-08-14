#include "subtask.h"

#include <vector>

#include <torch/torch.h>
#include <torch/csrc/autograd/variable.h>
#include <torch/csrc/autograd/function.h>
#include <ATen/ATen.h>



extern "C" {

torch::Tensor arr2tensor(double **arr) {
    double barr[2][2];
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 2; ++j) {
            barr[i][j] = arr[i][j];
        }
    }
    auto tharray = torch::zeros({2, 2}, torch::kFloat64); //or use kF64
    std::memcpy(tharray.data_ptr(), barr, sizeof(double) * tharray.numel());
    return tharray;
}

torch::Tensor tensor_sum(double **arr1, double **arr2) {
    torch::Tensor w1 = arr2tensor(arr1);
    torch::Tensor w2 = arr2tensor(arr2);
    auto loss = torch::sum(w1 + w2);
    return loss;
}

int main() {
    double **arr1;
    double **arr2;
    arr1 = read_arr("/home/vladlen/Desktop/Лаба_кафедра/TensorNetworks/Tensor/tensor1.txt");
    arr2 = read_arr("/home/vladlen/Desktop/Лаба_кафедра/TensorNetworks/Tensor/tensor2.txt");

    torch::Tensor sum = tensor_sum(arr1, arr2);
    std::cout << *sum.data<double>();


    return 0;
}

}