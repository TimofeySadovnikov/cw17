#pragma once
#include <iostream>
#include <string>
using namespace std;

class Computer {
	string name;
	float frequency;
	int OZU;
	bool DVD;
	float cost;

public:
	Computer(string name, float frequency, int OZU, bool DVD, float cost);

	int getOZU()const;
	void show();
};