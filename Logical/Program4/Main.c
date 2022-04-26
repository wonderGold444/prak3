
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	LED[0] = 0;
	LED[1] = 0;
	LED[2] = 0;
	LED[3] = 0;
	BUTTON[0] = 0;
	BUTTON[1] = 0;
	BUTTON[2] = 0;
	BUTTON[3] = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	if (BUTTON[0])
	{
		LED[0] = 1;
		if (!BUTTON[0])
		{
			LED[0] = 0;
		}
	}
	
	if (BUTTON[1])
	{
		LED[1] = 1;
		if (!BUTTON[1])
		{
			LED[0] = 0;
		}
	}
	
	if (BUTTON[2])
	{
		LED[2] = 1;
		if (!BUTTON[2])
		{
			LED[0] = 0;
		}
	}
	
	if (BUTTON[3])
	{
		LED[3] = 1;
		if (!BUTTON[3])
		{
			LED[0] = 0;
		}
	}
}

void _EXIT ProgramExit(void)
{

}

