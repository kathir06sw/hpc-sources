#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream new_file; 
	ofstream out_file("/var/tmp/steerwise/tx_employees.csv");
	new_file.open("/var/tmp/steerwise/emp-data.csv",ios::in);   
	if(!new_file) {
		cout<<"No such file"; 
	}
	else { 
		string ch; 
		if(out_file.is_open()){
			while (!new_file.eof()) { 
				new_file >>ch;
				int found = ch.find("TX"); 
				if(found>0 ){
					//cout << ch;   
					out_file << ch;
					out_file << "\n";
				}
		}
		new_file.close();  
		out_file.close();
		return 0;
		}
	
	}
}
