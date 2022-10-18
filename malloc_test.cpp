#include <iostream>
////#include <cuda.h>
#include <cuda_runtime.h>

int main() {
float* p = NULL;
//size_t size = 1 << 20; // 1MB
size_t size = 1 << 30 // 1GB
cudaError_t err = cudaSuccess;
err = cudaMalloc((void**)&p, size);
std::cout << cudaGetErrorString(err) << std::endl;
return 0;
}
