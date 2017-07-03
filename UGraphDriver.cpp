/** \file UGraphDriver.cpp
 * Driver for UndirectedGraph
 *
 * \author Brian Heim
 * \date   2017-06-30
 */

#include "AbstractUGraph.hpp"
#include "AMUGraph.hpp"
#include "ALUGraph.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  cout << "Driver for undirected graph" << endl;
  cout << "Enter the graph:" << endl;

  ALUGraph ug = ALUGraph( cin );

  cout << ug;
  return 0;
}