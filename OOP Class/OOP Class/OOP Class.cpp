#include <iostream>
using namespace std;


class Dog
{
public:
	string Breed;
	string Color;
	int Height;
	int Weight;

	//methods
	void Shake()
	{
		cout << "shaking\n";
	}
	void Sit()
	{
		cout << "siting\n";
	}
	void layDown()
	{
		cout << "Laying Down\n";
	}

	//constructor
	Dog(string a, string b, int c, int d)
	{
		Breed = a;
		Color = b;
		Height = c;
		Weight = d;
	}
};
	

int main()
{	
	//creat dog object
	Dog dogOne("Hound", "Brown", 2, 60);

	//print to console
	cout << "Breed: " << dogOne.Breed + "\n" << "Color: " << dogOne.Color + "\n";
	cout << "Height: " << dogOne.Height << " feet\n";
	cout << "Weight: " << dogOne.Weight << " pounds\n";

	//call methods
	dogOne.Shake();
	dogOne.Sit();
	dogOne.layDown();
	return 0;
}



