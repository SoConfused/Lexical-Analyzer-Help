#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstring>

using namespace std;

int main() {
  // Stores string from file
  string filetext;

  // Read file
  ifstream inFile("SampleInputFile1.txt");

  // Check if file opened successfully
  if (inFile.is_open())
  {
    cout << "File successfully opened." << endl;

    // Add analyzer code here
    
	

    inFile.close();
  }
  else 
    cout << "File failed to open." << endl;

  return 0;
}