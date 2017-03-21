
#include "stdafx.h"
#include<iostream>
#include<math.h>
#include"COMPLEX_LIB.h"

using namespace std;

class functions
{
public:
	int N;
	double *sequence;
public:

	//Constructor
	functions(const int N)
	{
		this->N = N;
		sequence = new double[N - 1];
		for (int l = 0; l<N; l++)
		{
			sequence[l] = 0;
		}
	}

	//Sampling_Function
	void Sampling()
	{
		for (int j = 0; j<N; j++)
		{
			cout << "nf(" << N << ") = ";
			cin >> sequence[j];
		}
	}

	//Print_Sequence
	void Print()
	{
		cout << "f = { ";
		for (int k = 0; k<N; k++)
		{
			cout << sequence[k];
			if (k<N - 1)
			{
				cout << ",";
			}
		}
		cout << "\t}" << endl;
	}

	//Destructor
	~functions() {}
};

//Operator_sum_Overload
functions& operator +(const functions &p1, const functions &p2)
{
	int NN = p1.N;
	functions *comm;
	comm = new functions(NN);
	for (int k = 0; k<NN; k++)
	{
		comm->sequence[k] = p1.sequence[k] + p2.sequence[k];
	}
	return *(comm);
}

//Operator_substract_Overload
functions& operator -(const functions &p1, const functions &p2)
{
	int NN = p1.N;
	functions *comm;
	comm = new functions(NN);
	for (int k = 0; k<NN; k++)
	{
		comm->sequence[k] = p1.sequence[k] - p2.sequence[k];
	}
	return *(comm);
}

//Operator_product_Overload
functions& operator *(const functions &p1, const functions &p2)
{
	int NN = p1.N;
	functions *comm;
	comm = new functions(NN);
	for (int k = 0; k<NN; k++)
	{
		comm->sequence[k] = p1.sequence[k] * p2.sequence[k];
	}
	return *(comm);
}

//Operator_division_Overload
functions& operator /(const functions &p1, const functions &p2)
{
	int NN = p1.N;
	functions *comm;
	comm = new functions(NN);
	for (int k = 0; k<NN; k++)
	{
		comm->sequence[k] = p1.sequence[k] / p2.sequence[k];
	}
	return *(comm);
}

//Operator_convolution_Overload
functions& operator ^(const functions &p1, const functions &p2)
{
	int NN = p1.N + p2.N;
	double sum = 0;
	functions *comm;
	comm = new functions(NN - 1);
	for (int n = 0; n<NN - 1; n++)
	{
		for (int k = 0; k<p1.N; k++)
		{
			if ((n - k >= 0) && (n - k<p1.N))
			{
				comm->sequence[n] = comm->sequence[n] + p1.sequence[n - k] * p2.sequence[k];
			}
		}
	}
	return *(comm);
}

//Operator_DFT_Overload
functions& operator >(const functions &p1, const functions &p2)
{
	int NN = p1.N;
	functions *comm;
	complex TwiddleFac(0, 0);
	complex movw(0, 0);
	complex movwf(0, 0);
	double w0 = 2 * 3.141592654 / NN;
	comm = new functions(NN);
	for (int k = 0; k<NN; k++)
	{
		for (int j = 0; j<NN; j++)
		{
			TwiddleFac.Evaluate(cos(w0*j*k), -sin(w0*j*k));
			movw = p1.sequence[j] * TwiddleFac;
			movwf = movwf + movw;
		}
		comm->sequence[k] = movwf.Mod() / NN;
		movw.Evaluate(0, 0);
		movwf.Evaluate(0, 0);
	}
	return *(comm);
}


#pragma once
