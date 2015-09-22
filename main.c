
#include <stdio.h>



_Cilk_shared int numDevices;

int main() {

    numDevices = _Offload_number_of_devices();
    printf("Number of availabe coproccessors: %d\n\n",numDevices);

}