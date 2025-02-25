#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include "Date.h"
#include "Address.h"

class Student{
	protected:
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date *dob;
		Date *expectedGrad;
		Address *address;
		int creditHours;
	public:
		Student();
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		int getCreditHours();	

};

#endif