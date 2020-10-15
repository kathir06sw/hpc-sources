#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream out_file("/mnt/d/DevOps/hpc-us-west-2/tx_employees.csv");
	std::ifstream infile("/mnt/d/DevOps/hpc-us-west-2/emp-data.csv");

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
