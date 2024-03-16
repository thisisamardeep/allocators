#include "iostream"
#include "vector"
#include "Allocator.h"
#include "CAllocator.h"
#include "Benchmark.h"
int main() {

    int t = 56;

    const std::size_t A = static_cast<std::size_t>(1e9);
    const std::size_t B = static_cast<std::size_t>(1e9);
    const std::vector<std::size_t> ALLOCATION_SIZES {32, 64, 256, 512, 1024, 2048, 4096};
    const std::vector<std::size_t> ALIGNMENTS {8, 8, 8, 8, 8, 8, 8};

    Allocator * cAllocator = new CAllocator();



}