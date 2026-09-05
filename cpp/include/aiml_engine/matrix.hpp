#pragma once

#include <vector>
#include <cstddef>

class Matrix {
    private:
    std::vector<double> data;
    std::size_t rowCount;
    std::size_t columnCount;

    std::size_t index(std::size_t row, std::size_t column) const;

    public:
    Matrix(std::size_t rows, std::size_t columns);
    double getValue(std::size_t row, std::size_t column) const;
    void setValue(std::size_t row, std::size_t column, double value);

    std::size_t getRowCount() const;
    std::size_t getColumnCount() const;
};