#include <iostream>
#include <cuda.h>
#include <cuda_runtime.h>
int main() {
  //cuInit(0);
  // std::cout << cudaGetErrorString(cudaGetLastError()) << std::endl;
  int deviceCount;
  cudaError_t e = cudaGetDeviceCount(&deviceCount);
  if (e != cudaSuccess)
    std::cout << "get device count failed, error is:" << cudaGetErrorString(e) << std::endl;
  std::cout << "device count:" << deviceCount << std::endl;
  return 0;
}
