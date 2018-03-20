#include <Eigen/Dense>
#include <random>
#include <utility>
#include <chrono>
#ifndef H_random_vector
#define H_random_vector
class RandomVector{
	public:
	RandomVector(size_t s, int low, int high) : s_(s), low_(low), high_(high){}
	std::pair<double, double> time_vector_multiplication(size_t n);
	Eigen::VectorXd	generate(){
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(low_, high_ - 1);	
	Eigen::VectorXd v(s_);
	for(int i = 0; i < s_; i++){
			v(i) = dis(gen);	
		}
	return v;
	}
	private:
	size_t s_;
	int low_;
	int high_;
};

#endif
