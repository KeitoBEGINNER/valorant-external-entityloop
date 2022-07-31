int roopon = 0;
int playersad = 0;

if (GetAsyncKeyState(VK_INSERT))
		{
			roopon = 0;
			playersad = 0;
		}

		size_t size = sizeof(uintptr_t);
		if (roopon == 0)
		{
			for (int q = 0; q < 3000; q++)
			{
				uintptr_t CurrentActor = Read<uintptr_t>(ActorArray + (q * size));
				
				if (CurrentActor1 != 0x00 && Read<uintptr_t>(CurrentActor + unique_id) == 18743553 && playersad == 0)
				{
					playersad = q;
					roopon = 1;
				}
			}
		}


		for (int i = playersad; i < playersad + 200; i++) //entityloop
		{
			
		}