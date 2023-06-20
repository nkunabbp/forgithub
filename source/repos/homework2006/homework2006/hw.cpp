#include<iostream>

using namespace std;

class Animal
{
protected:
	string name;
	string gender;
	string color;
	string breed;
	float age;
public:
	Animal(string name, string gender, string color, string breed, float age) :
		name(name),
		gender(gender),
		color(color),
		breed(breed),
		age(age) {

	};

	Animal() {};


	void show_info() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Breed: " << breed << endl;
	}
};

class Dog : public Animal {
private:
	int comands;
	bool IsTrained;

public:
	Dog(string name, string gender, string color, string breed, float age, int comands, bool IsTrained) :
		Animal(name, gender, color, breed, age),
		comands(comands),
		IsTrained(IsTrained) {

	}

	Dog() {};

	Dog(int comands, bool IsTrained) :
		comands(comands),
		IsTrained(IsTrained)
	{

	}


	void show_info_dog() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Breed: " << breed << endl;
		cout << "How many comands know:  " << comands << endl;
		cout << "Is Trained: " << boolalpha << IsTrained << endl;
	}
};


class Cat : public Animal {
private:
	bool IsLazy;
	bool IsLopEared;

public:
	Cat(string name, string gender, string color, string breed, float age, bool IsLazy, bool IsLopEared) :
		Animal(name, gender, color, breed, age),
		IsLazy(IsLazy),
		IsLopEared(IsLopEared) {};

	Cat() {};

	Cat(bool IsLazy, bool IsLopEared) :
		IsLazy(IsLazy),
		IsLopEared(IsLopEared) {}


	void show_info_cat() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Breed: " << breed << endl;
		cout << "Is lazy:  " << boolalpha << IsLazy << endl;
		cout << "Is LopEared: " << boolalpha << IsLopEared << endl;
	}

};

class Parrot : public Animal {
private:
	int Words;
	bool CanSpeak;

public:
	Parrot(string name, string gender, string color, string breed, float age, int Words, bool CanSpeak) :
		Animal(name, gender, color, breed, age),
		Words(Words),
		CanSpeak(CanSpeak) {

	}

	Parrot() {};

	Parrot(int Words, bool CanSpeak) :
		Words(Words),
		CanSpeak(CanSpeak) {}


	void show_info_parrot() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Breed: " << breed << endl;
		cout << "How many words know:  " << Words << endl;
		cout << "Can speak: " << boolalpha << CanSpeak << endl;
	}

};


int main() {
	Cat cat1("Murka", "F", "Gray", "Street-cat", 2, false, true);
	cat1.show_info_cat();

	cout << endl;

	Dog dog1("Lunka", "F", "White", "Labrador", 10.5, 14, true);
	dog1.show_info_dog();

	cout << endl;

	Parrot parrot1("Umka", "M", "Rainbow", "None", 1, 0, false);
	parrot1.show_info_parrot();

}