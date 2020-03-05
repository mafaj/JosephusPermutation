#include "L1.H"
int main()
{
	link start=new wezel(1, start);
	link x= start;
	
	int n=10;
	for(int i=2;i<=n;i++)
	{
		x->nastepny=new wezel (i, start);
		x=x->nastepny;
	}
	
	x=start;
    while(x->nastepny!=start)
    {
                             cout<<x->klucz<<'\t';
                             x=x->nastepny;
    }
    cout<<x->klucz;
    
    int m;
    cout<<"\nCo ktorego wybierasz? ";
    cin>>m;
    
	cout<<"\nzwyciezca nr:"<<eliminacja(x,m)->klucz;
	
	cin.get();
	cin.get();

}
			
			
