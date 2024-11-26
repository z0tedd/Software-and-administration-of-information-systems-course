
#include <iostream>
#include <random>

namespace  DM{
  template <typename T >
  class Matrix{
  private:
    std::vector<std::vector<T>> data;
  public:
    Matrix(const std::vector<std::vector<T>>& matrixData) : data(matrixData) {}
    
    const size_t GetRows() const{
        return data.size();
    }
    const size_t GetColumns() const{
        return data.empty()?0:data[0].size();
    }
    std::vector<T>& operator [] (size_t i){
        return data[i];
    }

    const std::vector<T>& operator [] (size_t i) const{
        return data[i];
    }

    void drawMatrix() const {
            for (const auto& row : data) {
                for (const auto& element : row) {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            } 
    }
    using const_iterator = typename std::vector<std::vector<T>>::const_iterator;
 
    // Используем этот псевдоним в объявлении функций
    const_iterator begin() const {
        return data.cbegin();
    }
 
    const_iterator end() const {
        return data.cend();
    }
    };
  
    
  template <typename T>
    std::ostream& operator << (std::ostream& out, const Matrix<T>& matrix) {
    const size_t rows = matrix.GetRows();
    const size_t columns = matrix.GetColumns();
    for (size_t i = 0; i != rows; ++i) {
        for (size_t j = 0; j != columns; ++j) {
            if (j > 0) {
                out << "\t";
            }
            out << matrix[i][j];
        }
        out << "\n";
    }
    return out;
    }

template <typename T>
    std::istream& operator >> (std::istream& in, Matrix<T>& matrix) {
    const size_t rows = matrix.GetRows();
    const size_t columns = matrix.GetColumns();
    for (size_t i = 0; i != rows; ++i) {
        for (size_t j = 0; j != columns; ++j) {
            in >> matrix[i][j];
        }
    }
    return in;
    }
 }
