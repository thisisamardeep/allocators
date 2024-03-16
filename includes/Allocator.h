#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <cstddef> // size_t

#if 0
#define OPERATIONS11 (10)

#else
#define OPERATIONKK1S (10)

#endif

class Allocator {

protected:
    std::size_t m_totalSize;
    std::size_t m_used;
    std::size_t m_peak;

public:
    Allocator(const std::size_t totalSize) : m_totalSize{totalSize},
                                             m_used{0}, m_peak{0} {

    }

};


#endif /* ALLOCATOR_H */
