#include "cycletime.h"
#include <unistd.h>

void initialize_cntrs(int32_t do_reset, int32_t enable_divider){
    printf("initialize PMU counters");
    init_counters(1,1); //do reset and enable dividers
}

unsigned int get_cycle_count(void){
    /*unsigned int cpu_before,cpu_after, counter;
    
    //cyclecount before sleeping
    cpu_before = get_cyclecount();
    usleep(delay);
    //cyclecount after sleeping
    cpu_after = get_cyclecount();

    //subtract the before and after cyclecount
    counter = cpu_after - cpu_before;
    */
    
    return get_cyclecount();    
}
