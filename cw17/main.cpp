#include "Computer.h"
#include <vector>

int main() {
	vector<Computer> arr;
	arr.push_back(Computer("HP", 1.2, 4, 0, 20'000));
	arr.push_back(Computer("Acer", 3.2, 16, 0, 35'000));
	arr.push_back(Computer("Samsung", 2.4, 8, 1, 27'000));
	arr.push_back(Computer("HP", 3.2, 32, 1, 29'000));

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].show();
		cout << endl;
	}

	//1
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i].getOZU() > 10)
		{
			arr[i].show();
			cout << endl;
		}
	}
}