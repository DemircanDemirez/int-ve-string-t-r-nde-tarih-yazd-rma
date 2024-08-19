	#include "Tarih.h"
	int main(){
		Tarih a;
		Tarih b(8);
		Tarih c(18,6);
		Tarih d(28,6,2017);
		Tarih e("19/06/1919");
		
		a.yaz();
		b.yaz();
		c.yaz();
		d.yaz();
		e.yaz();
		
		return 0;
	}