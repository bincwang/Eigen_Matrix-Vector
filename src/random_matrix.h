#include <Eigen/Dense>
#include <utility>
#include <random>
#include<chrono>
#ifndef H_random_matrix
#define H_random_matrix
class RandomMatrix{
	public:
	RandomMatrix(size_t row, size_t col, int low, int high) : row_(row), col_(col), low_(low), high_(high){}

	std::pair<double, double> time_matrix_multiplication(size_t n);

Eigen::MatrixXf	generate(){
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(low_, high_ - 1);	
	Eigen::MatrixXf m(row_, col_);
	for(int i = 0; i < row_; i++){
		for(int j = 0; j < col_; j++){
			m(i, j) = dis(gen);
			}
		}
	return m;
	}
	private:
	size_t row_;
	size_t col_;
	int low_;
	int high_;
};

#endif
