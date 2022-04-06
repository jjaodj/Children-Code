#include "PointTringle.h"

class Tringle
{
	public:

		Tringle();
		~Tringle();
		Tringle(Point A, Point B, Point C);

		void tinhtien(Point Z);
		void quay(float goc);
		void zoom(float k);
		void input();
		void output();

	private:

		Point A, B, C;

};

