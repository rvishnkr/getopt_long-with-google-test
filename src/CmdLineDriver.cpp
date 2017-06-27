/*
 * File name: CmdLineDriver.cpp
 * Created on: 17-May-2017
 * Author: ravi
 */
#include <iostream>
#include "CmdLine.hpp"

using namespace std;

int main (int argc, char *argv[]){

  CmdLine cla;
  cla.parse(argc,argv);
  
  if(cla.printUsageMessage == true){
    std::cout << cla.getUsageMessage() << std::endl;
  }
  else{
    std::cout << "\nCommand line arguments ran successfully with option \"" 
              << argv[1] << "\" and argument \"" << argv[2] << "\"\n" 
              << std::endl;
  }

  return 0;
}
