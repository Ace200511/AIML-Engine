#pragma once

#include <vector>
#include <cstddef>

class DatasetBuffer 
{
    private:
    std::vector<double> data;
    std::size_t rowCount;
    std::size_t columnCount;
    std::size_t depthCount;
    std::size_t index(std::size_t row,
                  std::size_t column,
                  std::size_t depth) const;

    public:
    DatasetBuffer(std::size_t rows, std::size_t columns, std::size_t depth);
    double getValue(std::size_t row, std::size_t column, std::size_t depth) const;
    void setValue(std::size_t row, std::size_t column, std::size_t depth, double value);

    std::size_t getRowCount() const;
    std::size_t getColumnCount() const;
    std::size_t getDepthCount() const;
};