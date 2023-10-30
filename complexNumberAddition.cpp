//complex number addition
#include<iostream>
using namespace std;
class complex{
	public:
		float real,imag;
		void input()
		{
			cout<<"Enter real part:";
			cin>>real;
			cout<<"Enter imaginary part:";
			cin>>imag;
		}
		void show()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		complex operator +(complex& obj)
		{
			complex temp;
			temp.real=real+obj.real;
			temp.imag=imag+obj.imag;
			return temp;
		}
};
int main()
{
	complex obj1,obj2,obj3;
	obj1.input();
	obj2.input();
	obj1.show();
	obj2.show();
	obj3=obj1+obj2;//obj1(obj2)
	obj3.show();
	return 0;
}
