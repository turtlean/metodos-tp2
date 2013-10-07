#ifndef BANDMATRIX_H
#define BANDMATRIX_H

#include <vector>
using namespace std;

class BandMatrix{
		
	public:
		BandMatrix(double cos_theta_1,double sen_theta_1, double cos_theta_2,double sen_theta_2, int n, vector<double> cargas);
		void mostrar();
		vector<double> resolver_sistema();
			
		
	private:
		void backward_substitution(vector<double>&,vector<double>,vector<int>);
		vector<vector<double> > elem;
		vector<double> b;
		
};

#endif
