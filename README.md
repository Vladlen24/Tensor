Tensor networks

Main goal: neural network layer wrapper (on Python) with calculations (on C++)!

1) First subtask: calculate sum of two rensors (on C++) and return result to Python

Stage: in progress...

At the moment: in Python I'm planing to convert tensor to array and transmit to C++ pointer on it (later I'm plaing to try transmit exact tensor or pointer on it); in C++ remains only write the function that convert tensor to array and and vice versa.



Useful links:
* Tutorial for PyTorch in C++ ( https://pytorch.org/cppdocs/frontend.html )
