#include "vector.hpp"

void Vector::alloc ( int size){
    m_size = size;
    //Reservando memoria dinámica
    m_data = new double[size];
}

void Vector::free(){
    //Desreferenciando el 
    //* <-operador unario seguido de la variable a desreferenciar
    //*ptr
    //Metodo C
    //ptr->size    

    //[] en caso de tener un vector a eliminar
    delete [] m_data;
}