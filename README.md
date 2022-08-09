Tensor networks

Main goal: neural network layer wrapper (on Python) with calculations (on C++)!

1) First subtask: calculate sum of two rensors (on C++) and return result to Python

Stage: C++ and Python are ready. Need to make .dll library with C++ code (now it doesn't see the Torch library)

At the moment: in Python I'm converting tensor to array and transmit to C++ pointer on it (later I'm plaing to try transmit exact tensor or pointer on it).



Useful links:
* Tutorial for PyTorch in C++ ( https://pytorch.org/cppdocs/frontend.html )
