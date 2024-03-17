#ifndef BENCHMARK_H
#define BENCHMARK_H

#if 0
#define OPERATIONS (m_nOperations)
#else
#define OPERATIONS (10)
#endif


class Benchmark {
public:
    Benchmark() = delete;

    Benchmark(const unsigned int nOperations) : m_nOperations{nOperations} {

    };

    void MultipleAllocation(Allocator *allocator, const std::vector<std::size_t> &allocationSizes,
                            const std::vector<std::size_t> &alignments);

private:
    std::size_t m_nOperations;

};


#endif /* BENCHMARK_H */