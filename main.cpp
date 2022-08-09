#include <torch/torch.h>
#include <iostream>
#include <ATen/ATen.h>
#include <torch/csrc/autograd/variable.h>
#include <torch/csrc/autograd/function.h>

float **summa(float **array1, float **array2){
    //convert array1 to torch::Tensor w1
    //convert array2 to torch::Tensor w2
    //torch::Tensor c = torch::sum(w1 + w2);
    //convert tensor c to float **     (конкретно здесь можно обойтись и просто floatom, но для дальнейшей работы лучше передавать его как массивом, полученным из тензора)
    //return result;
}

int main() {
    torch::Tensor tensor = torch::rand({2, 3});
    std::cout << tensor << std::endl;

    torch::Tensor a = torch::ones({2, 2}, torch::requires_grad());
    torch::Tensor b = torch::ones({2, 2}, torch::requires_grad());
    torch::Tensor c = torch::sum(a + b);
//    c.backward();
    std::cout << c << std::endl;
}