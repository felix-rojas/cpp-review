#ifndef MATRIX_H_
#define MATRIX_H_
#include <string>
#include <iostream>

/* Example of a class definition with commented documentation */


class Matrix {

    private:
    // Variables
    std::string type;
    int rows;
    int cols;

    public:
    
    // Constructors
    /** Construct a 2D matrix of specified size
    @param rows number of rows 
    @param cols number of columns
    @param type type of element held in the matrix
    */

    Matrix(int rows, int cols, std::string type) { }
    
    /**  Construct a matrix rows x cols of integers
    @param cols number of columns
    @param rows number of rows 
    */

    Matrix(int rows, int cols) { }

    // Accesor Functions
    /** Get the matrix size 'rows x columns'
        @return the matrix size as a string
    */
    std::string get_matrix_size const { return to_string(rows) + ' x ' + to_string(cols) }

    // Matrix functions

    /** Matrix multiplication

    */
    
}

#endif //MATRIX_H_