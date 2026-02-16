obj-m += CPUcntr.o 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWM) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWM) clean

