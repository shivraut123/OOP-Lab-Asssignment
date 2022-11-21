#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void set_distance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void get_distance()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
		void add(Distance c1, Distance c2)
		{
			feet = c1.feet + c2.feet;
			inches = c1.inches + c2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	Distance c1, c2, c3;
	c1.set_distance();
	c2.set_distance();
	c3.add(c1, c2);

	c3.get_distance();
	return 0;
}
