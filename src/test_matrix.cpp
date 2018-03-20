#include "random_matrix.h"
#include <chrono>

std::pair<double, double> RandomMatrix::time_matrix_multiplication(size_t n){
	row_ = n;
	col_ = n;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(low_, high_ - 1);
	Eigen::MatrixXf b(n, n);
	Eigen::MatrixXf a(n, n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a(i, j) = dis(gen);
			}
		}
	auto start_time1 = std::chrono::high_resolution_clock::now();
	b = a * a;
	auto end_time1 = std::chrono::high_resolution_clock::now();
	double elapsed_time1 = std::chrono::duration<double>(end_time1 - start_time1).count();
		
	std::vector<std::vector<int>> m;
	m.reserve(n);
	std::vector<int> curr;
	curr.reserve(n);
	for (int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int rand = dis(gen);
			curr.push_back(rand);
		}
		m.push_back(curr);
	}
	std::vector<std::vector<int>> z;
	std::vector<int> temp;
	int num = 0;
	z.reserve(n);

	auto start_time2 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int p = 0; p < n; p++){
				num = num + m[i][p] * m[p][j];
			}
			temp.push_back(num);
		}
		z.push_back(temp);
		while (temp.empty() == false){
			temp.pop_back();
		}
	}
	auto end_time2 = std::chrono::high_resolution_clock::now();
	double elapsed_time2 = std::chrono::duration<double>(end_time2 - start_time2).count();;
	return std::make_pair(elapsed_time1, elapsed_time2);	
}

