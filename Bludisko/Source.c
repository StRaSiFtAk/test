#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int polica = 0, stlpec = 1, dlzka, dlzka1, sirka, sirka1;
char sklad[201][201], sklad1[2001][2001], nacitanie[201];

void nacitaj_bludisko() {
	int i, j;
	sirka = strlen(nacitanie);
	for (i = 0; i < sirka; i++) {
		skladXXXXX[0][i] = nacitanie[i];
		sklad1[0][i] = nacitanie[i];
	}
	for (i = 0; i < 201; i++)
		nacitanie[i] = '\0';
	while (gets(&nacitanie) != NULL)
	{
		if (!strcmp(nacitanie, "----"))
			break;
		strcpy(&sklad[dlzka1][0], nacitanie);
		strcpy(&sklad1[dlzka1][0], nacitanie);
		for (i = 0; i < 201; i++)
			nacitanie[i] = '\0';
		dlzka1++;
	}
	dlzka = dlzka1;
}


void hladaj_cestu() {

	while (polica == dlzka - 1 && stlpec == sirka - 1) {          //hladá dokiaľ nepríde do ciela
		break;
	}
	sklad[0][1] = 'O';
	if (sklad[polica + 1][stlpec] == '.')
		polica++;
	if (sklad[polica][stlpec + 1] == '.')
	stlpec++;
	if (sklad[polica][stlpec - 1] == '.')
		stlpec--;
	if (sklad[polica - 1][stlpec] == '.')
		polica--;
	sklad[polica][stlpec] = 'O';
}


int main(void)dd {kk
	// sem napis svoje riesenie
	int i, j;


	while (gets(&nacitanie) != NULL) {
		nacitaj_bludisko();
		while (polica != dlzka - 1 && stlpec != sirka - 1) {
			hladaj_cestu();
		}
	}
}