#ifndef L1_H
#define L1_H
#include<iostream>
using namespace std;
struct wezel{
			int klucz;
			wezel *nastepny;
			
			wezel(int x, wezel*t)
			{
				klucz=x;
				nastepny=t;
			}
			};
			
		typedef wezel* link;
	link eliminacja(wezel *x, int m);
#endif
