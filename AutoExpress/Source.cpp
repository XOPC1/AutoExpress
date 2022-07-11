#include <iostream>
#include <string>
#include <vector>

class Tral {
public:
	virtual int getWeight() = 0;
	virtual int getCost() = 0;
	virtual int setWeight(int weight) = 0;
	virtual int setCost(int cost) = 0;
};

class Gazel:public Tral {
public:
	int getWeight() {
		int total = 0;
		for (int i = 0; i < c.size(); i++)
			total += c[i]->getWeight();
		return total;
	}
	int getCost() {
		int total = 0;
		for (int i = 0; i < c.size(); i++)
			total += c[i]->getCost();
		return total;
	}
	~Gazel() {
		for (int i = 0; i < c.size(); ++i)
			delete c[i];
	}
private:
	std::vector<Tral*> c;
	int weight;
	int cost;
};

class Auto :public Tral {
public://Ќужно сделать просто возрат собственного веса
	int getWeight() {
		int total = 0;
		for (int i = 0; i < c.size(); i++)
			total += c[i]->getWeight();
		return total;
	}
	int getCost() {
		int total = 0;
		for (int i = 0; i < c.size(); i++)
			total += c[i]->getCost();
		return total;
	}
private:
	std::vector<Tral*> c;
};

int main() {


	return 0;
}