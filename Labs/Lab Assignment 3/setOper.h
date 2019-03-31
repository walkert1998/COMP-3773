#ifndef SET_OPER
#define SET_OPER

class interval
{
	friend class setOper;
	public:
		interval();
		interval(double s, double e);
		double start;
		double end;
};

class setOper
{
	friend class interval;
	public:
		bool in_interval(double x, interval * interval);
		bool in_interval_intersection(double x, interval * a, interval * b);
		bool in_interval_union(double x, interval * a, interval * b);
};

#endif