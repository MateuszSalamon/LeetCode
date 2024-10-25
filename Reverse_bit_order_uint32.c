#include <stdio.h>
#include <stdint.h>

int reversBitOrder(uint32_t input)
{
    uint32_t retval = 0; 
    uint8_t input_maxval = 32;
    for(int i = 0; i < input_maxval; i++)
    {
    	if((input & 1<<i) != 0)
    	{
    		retval |= 1 << ((input_maxval - 1) - i);
    		//printf("t1:%x %x ",i, (input & 1<<i));
    	}
    	//printf("t2:%x %x ",i, (input & 1<<i));
    }
    
    //printf("ret: %x \n", retval);


    return retval;
}

int main()
{
    uint32_t input = 1234; 
    printf("ret: %x \n", reversBitOrder(input));

    return 0;
}
