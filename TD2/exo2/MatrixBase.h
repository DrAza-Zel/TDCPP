#ifndef MATRIX_BASE_H
#define MATRIX_BASE_H

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class MatrixBase
{
protected:
    std::vector<std::vector<T>> data;

    size_t rows;
    size_t cols;

public:

    MatrixBase()
        : rows(0), cols(0)
    {
    }

    MatrixBase(size_t r, size_t c)
        : rows(r),
          cols(c),
          data(r, std::vector<T>(c))
    {
    }

    MatrixBase(
        const std::vector<std::vector<T>>& values
    )
        : data(values)
    {
        rows = data.size();

        if (rows == 0)
        {
            cols = 0;
        }
        else
        {
            cols = data[0].size();
        }
    }

    virtual ~MatrixBase() = default;


    void addElement(
        size_t row,
        size_t col,
        const T& value
    )
    {
        if (row >= rows || col >= cols)
        {
            throw std::out_of_range(
                "Invalid matrix index"
            );
        }

        data[row][col] = value;
    }


    T getElement(
        size_t row,
        size_t col
    ) const
    {
        if (row >= rows || col >= cols)
        {
            throw std::out_of_range(
                "Invalid matrix index"
            );
        }

        return data[row][col];
    }


    size_t getRows() const
    {
        return rows;
    }


    size_t getCols() const
    {
        return cols;
    }


    virtual void display(
        std::ostream& os = std::cout
    ) const
    {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                os << data[i][j] << "\t";
            }

            os << std::endl;
        }
    }
};

#endif