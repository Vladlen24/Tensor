#include <torch/torch.h>
#include <iostream>
#include <ATen/ATen.h>
#include <torch/csrc/autograd/variable.h>
#include <torch/csrc/autograd/function.h>
#include "test.h"

extern "C" {
torch::Tensor arr2tensor(Item **arr) {
    float barr[2][2];
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 2; ++j) {
            barr[i][j] = arr[i][j].value;
        }
    }
    auto tharray = torch::zeros({2, 2}, torch::kFloat64); //or use kF64
    std::memcpy(tharray.data_ptr(), barr, sizeof(float) * tharray.numel());
    return tharray;
}

float tensor_sum(Item **arr1, Item **arr2) {
    torch::Tensor w1 = arr2tensor(arr1);
    torch::Tensor w2 = arr2tensor(arr2);
    auto loss = torch::sum(w1 + w2);
    float *temp_arr = loss.data<float>();
    return *temp_arr;
}

int main() {
    return 0;
}
}