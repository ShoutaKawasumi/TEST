#include<stdio.h>

main()
{
	int Kokugo,Shakai,Rika;
    int Goukei,Heikin;

    printf("国語の点数=");
    scnhaf("%d",&Kokugo);
    printf("社会の点数=");
    scanf("%d",&Shakai);
    printf("理科の点数=");
	scanf("%d",&Rika);

	if (Kokugo < 90) {
		Kokugo = Kokugo / 2;
	} else {
		Kokugo = Kokugo;
	}


    Goukei = Kokugo + Shakai + Rika;

    Heikin = Goukei / 3;

    printf("合計= %d　平均=%d\n",Goukei,Heikin);

    retuin0;
}