#include "L1.H"
link eliminacja(wezel *x, int m)
{
	cout<<"\n\nwybijamy co "<<m<<"-tego \n";
	link y;
    while(x!=x->nastepny)
    {
		for(int i=1; i<m;i++)
		{
				x=x->nastepny;
				y=x;
				cout<<x->klucz<<'\t';
		}

	x->nastepny=x->nastepny->nastepny;
	
	}return x;
}
