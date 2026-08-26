#include "aiml_engine/dataset_buffer.hpp"

DatasetBuffer::DatasetBuffer(std::size_t r, std::size_t c, std::size_t d) : rowCount(r), columnCount(c), depthCount(d) 
{
    data.resize(rowCount * columnCount * depthCount);
}