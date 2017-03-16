#include<stdio.h>

int Kokugo,Shakai,Rika;
int Goukei,Heikin;

void Heikinkeisan ( int, int);

main()
{
	

    Kokugo = 90;
	Shakai = 90;
	Rika = 90;
	
	Goukei = Kokugo + Shakai + Rika;
	
	if (Goukei > 0) {
		Heikinkeisan (Goukei, Heikin);
	}

}

void Heikinkeisan(
	int Goukei,
	int Heikin)
{
	Heikin = Goukei / 3;
}
	