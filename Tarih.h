#ifndef TARIH_H
#define TARIH_H

class Tarih{
	private:
		int gun;
		int ay;
		int yil;
	public:
		Tarih(int gun=1, int ay=1, int yil=2017);
		Tarih(char p[]);
		void yaz();
};

#endif