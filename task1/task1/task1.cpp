#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
class Pet {
public:
	string name, type;
	Pet(string name, string type)
	{
		this->name = name;
		this->type = type;
		
	}
};
class Animal
{
public:
	Pet* pet;
	Pet* pet2;//Employee HAS-A Address   
public:
	int age;
	string name;
	string gender;
	Animal(int age, string name, string gender, Pet* pet , Pet* pet2)
	{
		this->age = age;
		this->name = name;
		this->gender = gender;
		this->pet = pet;
		this->pet2 = pet2;
	}
	void display()
	{
		cout << age << " " << name << " " << gender << " " <<
			pet->name << " " << pet->type << pet2->name << " " << pet2->type << endl;
	}
};
int main(void) {
	stack<string> mstack;
	stack<string> fstack;
	std::vector<string> marr;
	std::vector<string> farr;

	Pet pet1Ahm = Pet("garfield", "cat");
	Pet pet2Ahm = Pet("fido", "dog");
	Animal a1 = Animal(23, "Ahmed","male", &pet1Ahm , &pet2Ahm);
	
	Pet pet1s = Pet("tidy", "cat");
	Pet pet2s = Pet("ted", "dog");
	Animal a2 = Animal(45, "sarah", "female", &pet1s, &pet2s);

	Pet pet1h = Pet("jili", "cat");
	Pet pet2h = Pet("jack", "dog");
	Animal a3 = Animal(30, "hassan", "male", &pet1h, &pet2h);
	Animal ara[3] = {a1,a2,a3};
	
	for (int i = 0; i < 3; i++)
	{
		//ara[i].display();
		if (ara[i].pet->type == "cat" && ara[i].gender == "male")
		{
			marr.push_back(ara[i].pet->name);

			
		}
		else if (ara[i].pet->type == "cat" && ara[i].gender == "female")
		{
			farr.push_back(ara[i].pet->name);
		}
		else if (ara[i].pet2->type == "cat" && ara[i].gender == "female")
		{
			farr.push_back(ara[i].pet2->name);
		}
		else if (ara[i].pet2->type == "cat" && ara[i].gender == "female")
		{
			farr.push_back(ara[i].pet2->name);
		}

	}
		//std::vector<double> arr;
		//arr.push_back(2.02);
		//arr.push_back(1.02);
		//arr.push_back(3.03);
		std::sort(marr.begin(), marr.end());
		cout << "Male" << endl<<endl;
		for (auto x : marr)
			std::cout <<"." << x << "\n";
		cout << endl<<"Female" << endl<<endl;
		std::sort(farr.begin(), farr.end());

		for (auto x : farr)
			std::cout <<"." << x << "\n";
	//a1.display();
	return 0;
}