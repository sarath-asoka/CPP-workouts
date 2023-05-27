#include<cassert>
#include<vector>

class Matrix{
    public:
        Matrix(int rows, int columns) : rows_(rows),columns_(columns), values_(rows * columns) {}
        int& operator()(int row, int column) const {
            return values_[row*columns_ + column];
        }
        int operator()(int row, int column) const {
            return values_[row*columns_ + column];
        } 
    private:
        int rows_;
        int columns_;
        std::vector<int> values_;       
};

int main() {
    Matrix matrix(2,2);
    matrix(0,0) = 4;
    assert(matrix(0,0) == 4);
}