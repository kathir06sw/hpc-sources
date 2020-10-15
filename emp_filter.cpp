#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream out_file("/var/tmp/steerwise/tx_employees.csv");
	std::ifstream infile("/var/tmp/steerwise/emp-data.csv");

	if(!infile) {
		cout<<"No such file"; 
	}
	else { 
		for( std::string line; getline( infile, line ); )
		{
			// cout <<"line"<<line;
			int found = line.find("TX"); 
			if(found>0 ){
				// cout << line;   
				out_file << line;
				out_file << "\n";
			}
		}
		infile.close();  
		out_file.close();
		return 0;
	
	}
}
