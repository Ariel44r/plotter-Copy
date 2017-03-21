#include "stdafx.h"
#include "iostream"
#include "math.h"
#include "COMPLEX_LIB.h"
#include "SEQUENCES.h"

using namespace System;
using namespace std;
using namespace System::Drawing;
using namespace System::Windows::Forms;

class Graficador 
{
private:
	double x,y,xi,xf,yi,yf,h,N;
	int c1,f1,ci,fi,cf,ff,n,c,f;
	int l = 0,intx;

public:
	
	Graficador(double xi,double xf,double yi,double yf,Graphics ^g)
	{
		//Parameters
		{
			ci = 4;
			fi = 0;
			cf = 1004;
			ff = 590;
			n = cf - ci;
			N = xf - xi;
			h = N / n;
			this->xi = xi;
			this->xf = xf;
			this->yi = yi;
			this->yf = yf;
		}
		
		functions seq1(N);
		float w0 = 2 * 3.141592654;
		
		//Evaluate_Function´s_sequence
		for (int j = 0;j < N;j++)
		{
			seq1.sequence[j] = 40 * sin(6.28*100*j) + 80 * sin(6.28*200*j) + 80 * sin(6.28*400*j) + 80 * sin(6.28*800*j) + 120 * sin(6.28 * 16000 * j);
		}
	
		//Obtain_DFT
		functions seq2 = seq1 > seq1;		
		
		//X_AXIS_SEGMENT
		for (int i = xi; i <= xf;i++)
		{
			if (l == 5)
			{
				l = 0;
				g->DrawLine(Pens::White, col(i), fil(-0.25), col(i), fil(0.25));
			}
			else
			{
				g->DrawLine(Pens::White, col(i), fil(-0.125), col(i), fil(0.125));
			}
			l++;
		}
		l = 0;//Reset_l

		//Y_AXIS_SEGMENT
		l = 0;
		for (int i = yi; i <= yf; i++)
		{
			if (l == 5)
			{
				l = 0;
				g->DrawLine(Pens::White, col(-0.25), fil(i), col(0.25), fil(i));
			}
			else
			{
				g->DrawLine(Pens::White, col(-0.125), fil(i), col(0.125), fil(i));
			}
			l++;
		}

		//MessageBox::Show("xi="+n+"xf="+h);
		l = 0;
		//Initial_Values_to_interpolation
		double storax=col(xi),storay=fil(yi);
		for(int k=0;k<n;k++)
		{
			x = xi + k * h;
			intx = x-xi;
			y = seq2.sequence[intx];
			c = col(x);
			f = fil(y);
			//MessageBox::Show("c="+c+"xf="+f+"x="+x);
			g->DrawLine(Pens::BurlyWood,c,f,c+1,f);
			
			//Samples
			if (l == 2)
			{
				l = 0;
				g->DrawLine(Pens::DarkOliveGreen, c, fil(0), c, f);
				g->DrawEllipse(Pens::White, c-2, f-2, 4, 4);
			}
			if(x == 628)
			{
				l = 0;
				g->DrawLine(Pens::Orange, col(x), fil(0), col(x), fil(y));
				g->DrawLine(Pens::Orange, col(x+0.1), fil(0), col(x+0.1), fil(y));
				g->DrawLine(Pens::Orange, col(x+0.2), fil(0), col(x+0.2), fil(y));
			}
			
			//Interpolation
			if ((l == 1) || (l == 0))
			{
				l = 0;
				g->DrawLine(Pens::GhostWhite, storax, storay, c, f);
				storax = c;
				storay = f;
			}
			l++;
		}
		g->DrawLine(Pens::Orange, col(xi), fil(0), col(xf), fil(0));
		g->DrawLine(Pens::Orange, col(0), fil(yi), col(0), fil(yf));
	}
	//Evaluate_function_f(x)
	double fn(double x)
	{
		return (sin(x));
	}

	//Col_Setting
	int col(double x)
	{
		int column;
		column=(xf-x)*ci/(xf-xi)+(x-xi)*cf/(xf-xi);
		//MessageBox::Show("c="+co);
		return(column);
	}
	
	//Fil_Setting
	int fil(double y)
	{
		int fila;
		fila=(yf-y)*ff/(yf-yi)+(y-yi)*fi/(yf-yi);
		return(fila);
	}
};