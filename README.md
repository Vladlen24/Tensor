Tensor networks

Main goal: neural network layer wrapper (on Python) with calculations (on C++)!

1) First subtask: calculate sum of two rensors (on C++) and return result to Python

Stage: C++ and Python are ready. Need to make .dll library with C++ code (now it doesn't see the Torch library)

Was realised the solution by using system requests in Python (but data exchange realised via files, so it works slower): https://github.com/Vladlen24/Tensor/tree/main/via_sys_files


Useful links:
* Tutorial for PyTorch in C++ ( https://pytorch.org/cppdocs/frontend.html )
