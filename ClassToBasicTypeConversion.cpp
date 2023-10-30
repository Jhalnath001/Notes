#include<iostream>
using namespace std;
class Distance
{
int feet;
float inches;
public:
Distance(int f,float i)
{
     feet=f;
     inches=i;
}
 operator float()//conversion function, converts Distance type to a basic type float.
{
		float ft=inches/12;
		ft=feet+ft;
		return (ft/3.28);
}
};
int main()
{
	float meter;
	Distance obj(5,8);
	meter=obj;
	cout<<"Value in meter is:"<<meter;
	return 0;
}
