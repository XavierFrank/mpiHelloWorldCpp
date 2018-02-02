#include "mpi.h"
#include <iostream>

int main(int argc, char* argv[])
  {
    MPI::Init(argc, argv);
    int rank = MPI::COMM_WORLD.Get_rank();
    std::cout << "I am " << rank << std::endl;
    return 0;
}
