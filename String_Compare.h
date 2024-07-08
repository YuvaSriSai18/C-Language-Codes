void *larger(void *dataPtr1, void*dataPtr2,int (*PtrToCmpFun)(void* , void*))
{
	if((*PtrToCmpFun)(dataPtr1 , dataPtr2) > 0)
	{
		return dataPtr1;
	}
	else
	{
		return dataPtr2;
	}
}