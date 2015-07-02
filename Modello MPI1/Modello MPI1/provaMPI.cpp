// definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include "mpi.h"
#define itmax 5

using namespace std;

int main(int argc, char* argv[])
{
	MPI_Init(&argc, &argv);
	
	MPI_Finalize();
	return 0;
}

