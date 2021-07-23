#include <string>
#include <iostream>
#include "test_framework/generic_test.h"
using std::string;

string LookAndSay(int n) {
  // TODO - you fill in here.
	std::vector<std::string> lookArr;
	lookArr.push_back("1");
	
	for (int i = 0; i < n - 1; i++)
	{
		std::string constructString;
		std::string holder = lookArr.at(i);
		int len = holder.length();
		char currentStringNum;
		int consectChars = 0;
		if (holder.length() > 1) 
		{
				for (int j = 0; j < len - 1; j)
				{
					currentStringNum = holder[j];
					int thismany = 1;
					while (currentStringNum == holder[j + thismany])
						{
							thismany++;
						}
					char complex = thismany + 64;
					std::string thismanyString(1, complex);
					constructString = constructString + thismanyString + holder[j];
					j = j + thismany;

				}
				lookArr.push_back(constructString);
		}
		else {
			lookArr.push_back("1" + holder[i]);
			
		}

		
	}
  return lookArr.at(n - 1);
}
int main(int argc, char* argv[]) {
   std::cout << LookAndSay(3) << std::endl;
}