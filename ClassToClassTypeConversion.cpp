#include<iostream>
using namespace std;
class minutes{
	int min;
	public:
		minutes()
		{
			min=0;
		}
		minutes(int m)
		{
			min=m;
		}
		void show()
		{
			cout<<"Total minutes:"<<min;
		}
};
class time{
	int hr,min;
	public:
		time(int a,int b)
		{
			hr=a;
			min=b;
		}
		operator minutes()
		{
			int tm=hr*60+min;
			return minutes(tm);
		}
};
int main()
{
	time t(2,40);
	minutes m;
	m=t;
	m.show();
}
