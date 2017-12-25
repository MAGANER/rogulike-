#pragma once
#include<vector>
#include"Object.h"
class Inventory
{
private:
	vector<Object> items;
	bool empty;
public:
	int get_energy(int item_number);
	int get_health(int item_number);
	void delete_item(int item_number);
	int get_inventory_size();
	void show_inventory();
	void add_item(vector<Object>& creatures, int item_number);
	bool is_empty();
	Inventory();
	~Inventory();
};

