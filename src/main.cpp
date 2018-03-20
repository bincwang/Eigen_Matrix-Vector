#include "random_matrix.h"
#include "random_vector.h"
#include <Eigen/Dense>
#include <iostream>
int main(int argc,char* argv[]){

	std::cout<<"Matrix-Matrix multiplication tests " <<std::endl;
	RandomMatrix a1(10, 10, 1, 10);
	std::cout<<"size 10: " <<std::endl;
	std::cout<<"Eigen: "<<a1.time_matrix_multiplication(10).first<<std::endl;
	std::cout<<"Vector: "<<a1.time_matrix_multiplication(10).second<<std::endl;


	RandomMatrix a0(50, 50, 1, 10);
	std::cout<<"size 50: " <<std::endl;
	std::cout<<"Eigen: "<<a0.time_matrix_multiplication(50).first<<std::endl;
	std::cout<<"Vector: "<<a0.time_matrix_multiplication(50).second<<std::endl;

	RandomMatrix a2(100, 100, 1, 10);	
	std::cout<<"size 100: " <<std::endl;
	std::cout<<"Eigen: "<<a2.time_matrix_multiplication(100).first<<std::endl;
	std::cout<<"Vector: "<<a2.time_matrix_multiplication(100).second<<std::endl;
	
	RandomMatrix a5(250, 250, 1, 10);
	std::cout<<"size 250: " <<std::endl;
	std::cout<<"Eigen: "<<a5.time_matrix_multiplication(250).first<<std::endl;
	std::cout<<"Vector: "<<a5.time_matrix_multiplication(250).second<<std::endl;

	RandomMatrix a4(500, 500, 1, 10);
	
	std::cout<<"size 500: " <<std::endl;
	std::cout<<"Eigen: "<<a4.time_matrix_multiplication(500).first<<std::endl;
	std::cout<<"Vector: "<<a4.time_matrix_multiplication(500).second<<std::endl;

	
	RandomMatrix a3(1000, 1000, 1, 10);
	
	std::cout<<"size 1000: " <<std::endl;
	std::cout<<"Eigen: "<<a3.time_matrix_multiplication(1000).first<<std::endl;
	std::cout<<"Vector: "<<a3.time_matrix_multiplication(1000).second<<std::endl;
	
	std::cout<<"\n"<<std::endl;
	
	std::cout<<"Vector-Vector multiplication tests"<<std::endl;
	
	RandomVector v2(100, 1, 10);
	std::cout<<"size 100: "<<std::endl;
	std::cout<<"Eigen: "<<v2.time_vector_multiplication(100).first<<std::endl;
	std::cout<<"Vector: "<<v2.time_vector_multiplication(100).second<<std::endl;

	RandomVector v3(1000, 1, 10);
	std::cout<<"size 1000: "<<std::endl;
	std::cout<<"Eigen: "<<v3.time_vector_multiplication(1000).first<<std::endl;
	std::cout<<"Vector: "<<v3.time_vector_multiplication(1000).second<<std::endl;

	RandomVector v4(100000, 1, 10);
	std::cout<<"size 100000: "<<std::endl;
	std::cout<<"Eigen: "<<v4.time_vector_multiplication(100000).first<<std::endl;
	std::cout<<"Vector: "<<v4.time_vector_multiplication(100000).second<<std::endl;

	RandomVector v5(1000000, 1, 10);
	std::cout<<"size 1000000: "<<std::endl;
	std::cout<<"Eigen "<<v5.time_vector_multiplication(1000000).first<<std::endl;
	std::cout<<"Vector "<<v5.time_vector_multiplication(1000000).second<<std::endl;
	return 0;
}


	
