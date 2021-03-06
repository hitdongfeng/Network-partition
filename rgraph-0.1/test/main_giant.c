#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "graph.h"

int main()
{

  /*
    ----------------------------------------------------------------
    Build the network---only use giant component
    ----------------------------------------------------------------
  */
  FILE *infile=NULL;
  struct node_gra *total_net=NULL;
  struct node_gra *net=NULL;
  
  infile = fopen("test.dat", "r");
  total_net = FBuildNetwork(infile, 0, 0, 0, 1);
  fclose(infile);
  net = GetLargestStronglyConnectedSet(total_net, 100000);

  /*
    ----------------------------------------------------------------
    Output results
    ----------------------------------------------------------------
  */
  FPrintPajekFile("total.net", total_net, 0, 0, 1);
  FPrintPajekFile("giant.net", net, 0, 0, 1);

  /*
    ----------------------------------------------------------------
    Free memory
    ----------------------------------------------------------------
  */
  RemoveGraph(total_net);
  RemoveGraph(net);

  return 0;
}
