#include "Data.h"
Data::Data()
{
	Patient_id = 0;
	Patient_name = " ";
	Patient_age = 0;
	 
}
Data::Data(int id, string name, int age)
	{
		Patient_id=id;
        Patient_name = name;
		Patient_age = age;
		 
	}