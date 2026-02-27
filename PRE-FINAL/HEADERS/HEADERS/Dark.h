


#ifndef DARK_H
#define DARK_H
using namespace std;

class Dark : public Element{
public:

	 void attack() override {
		cout << "This Dark is attacking" << endl;
	}


	 void attack(double atk) override {
		 cout << "Attack power (sqrt): Floor: " << sqrt(floor(atk)) << " Ceil: " << ceil(sqrt(atk)) << endl;
	}



};


#endif#pragma once
