#include "A1_Bankkonten_Konto.h"
#include "A1_Bankkonten_Subkonten.h"

#include <memory>

int main()
{
	std::unique_ptr<A1_Bankkonten_Konto*[]> konten(new A1_Bankkonten_Konto*[10]);

	konten[0] = new A1_Bankkonten_Giro(123456, 100, 0.05);
	konten[1] = new A1_Bankkonten_Giro(462198, 50, 0.15);
	konten[2] = new A1_Bankkonten_Giro(742752, -10, 0.1);
	konten[3] = new A1_Bankkonten_Bauspar(187218, 0, 0.1, 5000);
	konten[4] = new A1_Bankkonten_Bauspar(135126, 500, 0.1, 10000);
	konten[5] = new A1_Bankkonten_Bauspar(132486, 3000, 0.1, 7500);
	konten[6] = new A1_Bankkonten_Tagesgeld(782742, 55, 0.1, 3);
	konten[7] = new A1_Bankkonten_Tagesgeld(424547, 200, 0.1, 3);
	konten[8] = new A1_Bankkonten_Tagesgeld(427545, 1000, 0.1, 3);
	konten[9] = new A1_Bankkonten_Tagesgeld(785472, 745, 0.1, 3);

	for (int i = 0; i < 10; i++)
	{
		konten[i]->readValues();
	}
		
	return 0;
}