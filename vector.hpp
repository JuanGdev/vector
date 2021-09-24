#ifndef VECTOR_HPP
#define VECTOR_HPP

struct Vector{
    void alloc( int size );
    void free();
    int m_size;
    double* m_data;
};

//Vector alloc( int size);
//void vfree( Vector* ptr );

#endif