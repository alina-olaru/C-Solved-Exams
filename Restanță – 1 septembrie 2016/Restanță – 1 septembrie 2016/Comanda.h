#pragma once
class Comanda
{
private:
	int ecran;
	int video;
	int tabla;
public:

	Comanda();
	Comanda(int ecran, int video, int tabla)
		: ecran(ecran),
		  video(video),
		  tabla(tabla)
	{
	}

	int get_ecran() const;
	void set_ecran(int ecran);
	int get_video() const;
	void set_video(int video);
	int get_tabla() const;
	void set_tabla(int tabla);
};

