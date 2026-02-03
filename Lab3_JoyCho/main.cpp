//
//  main.cpp
//  Lab4
//
//  Created by Alireza on 2/14/20.
//  Copyright Â© 2020 Alireza. All rights reserved.
//

#include "main.h"
#include "cycletime.h"
#include "timer.h"
#include <unistd.h>

using namespace std;

int main(int argc, const char * argv[])
{
	float cpu_timer;
	unsigned int delay = 1;
	
	cout << "WES237A lab 3" << endl;

	char key=0;
	
	// 1 argument on command line: delay = arg
	if(argc >= 2)
	{
		delay = atoi(argv[1]);
	}

    //TODO: declare 2 cpu_count variables: 1 for before sleeping, 1 for after sleeping (see cpu_timer)
    unsigned int cpu_before,cpu_after, counter;
    
    //TODO: initialize the counter
    init_counters(1,1); //do reset and enable dividers

    //TODO: get the cyclecount before sleeping
    cpu_before = get_cyclecount();
    usleep(delay);
    //TODO: get the cyclecount after sleeping
    cpu_after = get_cyclecount();

    //TODO: subtract the before and after cyclecount
    counter = cpu_after - cpu_before;
    
    //TODO: print the cycle count (see the print statement for the cpu_timer below)
    cout << "Cycle count: " << counter << endl;
    //printf("Cycle count: %d", counter);

	LinuxTimer t;
	usleep(delay);
	t.stop();
	cpu_timer = t.getElapsed();
	
	cout << "Timer: " << (double)cpu_timer/1000000000.0 << endl;

	return 0;
}

