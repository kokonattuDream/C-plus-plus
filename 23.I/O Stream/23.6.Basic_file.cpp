#include <fstream>
#include <iostream>
#include <string>

int fileOutput()
{
    // ofstream is used for writing files
    // We'll make a file called Sample.dat
    std::ofstream outf{ "Sample.dat" };
 
    // If we couldn't open the output file stream for writing
    if (!outf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, Sample.dat could not be opened for writing!" << std::endl;
        return 1;
    }
 
    // We'll write two lines into this file
    outf << "This is line 1" << '\n';
    outf << "This is line 2" << '\n';
 
    return 0;
	
    // When outf goes out of scope, the ofstream
    // destructor will close the file
}

int fileInput()
{
    // ifstream is used for reading files
    // We'll read from a file called Sample.dat
    std::ifstream inf{ "Sample.dat" };
 
    // If we couldn't open the input file stream for reading
    if (!inf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, Sample.dat could not be opened for reading!\n";
        return 1;
    }
 
    // While there's still stuff left to read
    while (inf)
    {
        // read stuff from the file into a string and print it
        std::string strInput;
        std::getline(inf, strInput);
        std::cout << strInput << '\n';
    }
    
    return 0;
	
    // When inf goes out of scope, the ifstream
    // destructor will close the file
}

int appendMode()
{
    // We'll pass the ios:app flag to tell the ofstream to append
    // rather than rewrite the file.  We do not need to pass in std::ios::out
    // because ofstream defaults to std::ios::out
    std::ofstream outf{ "Sample.dat", std::ios::app };
 
    // If we couldn't open the output file stream for writing
    if (!outf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, Sample.dat could not be opened for writing!\n";
        return 1;
    }
 
    outf << "This is line 3" << '\n';
    outf << "This is line 4" << '\n';
    
    return 0;
	
    // When outf goes out of scope, the ofstream
    // destructor will close the file
}