#include "mylib/random.h"
#include <boost/program_options.hpp>
#include <iostream>

using namespace std;

namespace po = boost::program_options;

int main(int argn, char** argv)
{
    // This example code was ripped straight from
    // https://github.com/boostorg/program_options/blob/develop/example/first.cpp

    // Declare the supported options.
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "produce help message")
        ("compression", po::value<int>(), "set compression level")
    ;

    po::variables_map vm;
    po::store(po::parse_command_line(argn, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help")) {
        cout << desc << "\n";
        return 1;
    }

    if (vm.count("compression")) {
        cout << "Compression level was set to "
     << vm["compression"].as<int>() << ".\n";
    } else {
        cout << "Compression level was not set.\n";
    }

   // Finish  Boost program_options stuff
   cout << "Hello world!" << endl;

   cout << "Did you know, I can generated random numbers?" << endl;
   cout << "...yeah I can." << endl;

   for (int i=0; i < 10 ; ++i)
   {
       if (i == 0)
           cout << "Here's one ";
        else
            cout << "And another ";
       cout << mylib::getRandomNumber() << endl;
   }

   cout << endl << endl << "Impressed... Yeah I bet you were!" << endl;

   return 0;
}
