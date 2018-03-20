#include "random_vector.h"
#include <chrono>

std::pair<double, double> RandomVector::time_vector_multiplication(size_t n){
	//for the eigen vector
	s_ = n;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(low_, high_ - 1);
	int num = 0;
	Eigen::VectorXd a(n);
	for(int i = 0; i < n; i++){
		a(i) = dis(gen);
	}
	auto start_time1 = std::chrono::high_resolution_clock::now();
	num = a.dot(a);
	auto end_time1 = std::chrono::high_resolution_clock::now();
	double elapsed_time1 = std::chrono::duration<double>(end_time1 - start_time1).count();
	//for the std::vecto<int>
	std::vector<int> m;
	m.reserve(n);
	for (int i = 0; i < n; i++){
		m[i] = dis(gen);
	}
	int curr = 0;
	auto start_time2 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++){
		curr = curr + m[i]*m[i];
	}
	auto end_time2 = std::chrono::high_resolution_clock::now();
	double elapsed_time2 = std::chrono::duration<double>(end_time2 - start_time2).count();;
	return std::make_pair(elapsed_time1, elapsed_time2);
}
