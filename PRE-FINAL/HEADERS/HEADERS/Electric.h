#ifndef ELECTRIC_H
#define ELECTRIC_H

using namespace std;

class Electric: public Element{
public:

	 void attack() override {
		cout << "This Electric is attacking" << endl;
	}


	 void attack(double atk) override {
		cout << "Attack power (sqrt): Floor: " << sqrt(floor(atk)) << " Ceil: " << ceil(sqrt(atk)) << endl;
	}



};



#endif#pragma once
