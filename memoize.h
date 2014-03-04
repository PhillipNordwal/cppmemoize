#include <map>
using namespace std;

template <class RT, class T1>
RT memoize(RT (*funcname)(T1), T1 val1)
{
	typedef RT (*FUNCTYPE)(T1);
	typedef pair <FUNCTYPE, T1> KEYTYPE;
	typedef map <KEYTYPE, RT> MAPTYPE;
	KEYTYPE key = make_pair(funcname, val1);
	RT return_value;
	static MAPTYPE memo;
	typename MAPTYPE::iterator cur = memo.find(key);
	if (memo.end() == cur){
		return_value = funcname(val1);
		memo.insert(make_pair(key, return_value));
	}
	else{
		return_value = (*cur).second;
	}
	return return_value;
}

template <class RT, class T1, class T2>
RT memoize(RT (*funcname)(T1, T2), T1 val1, T2 val2)
{
	typedef RT (*FUNCTYPE)(T1, T2);
	typedef pair <FUNCTYPE, pair <T1, T2> > KEYTYPE;
	typedef map <KEYTYPE, RT> MAPTYPE;
	KEYTYPE key = make_pair(funcname, make_pair(val1, val2));
	RT return_value;
	static MAPTYPE memo;
	typename MAPTYPE::iterator cur = memo.find(key);
	if (memo.end() == cur){
		return_value = funcname(val1, val2);
		memo.insert(make_pair(key, return_value));
	}
	else{
		return_value = (*cur).second;
	}
	return return_value;
}

template <class RT, class T1, class T2, class T3>
RT memoize(RT (*funcname)(T1, T2, T3), T1 val1, T2 val2, T3 val3)
{
	typedef RT (*FUNCTYPE)(T1, T2, T3);
	typedef pair <FUNCTYPE, pair <T1, pair <T2, T3> > > KEYTYPE;
	typedef map <KEYTYPE, RT> MAPTYPE;
	KEYTYPE key = make_pair(funcname, make_pair(val1, make_pair(val2, val3)));
	RT return_value;
	static MAPTYPE memo;
	typename MAPTYPE::iterator cur = memo.find(key);
	if (memo.end() == cur){
		return_value = funcname(val1, val2, val3);
		memo.insert(make_pair(key, return_value));
	}
	else{
		return_value = (*cur).second;
	}
	return return_value;
}
template <class RT, class T1, class T2, class T3, class T4>
RT memoize(RT (*funcname)(T1, T2, T3), T1 val1, T2 val2, T3 val3, T4 val4)
{
	typedef RT (*FUNCTYPE)(T1, T2, T3, T4);
	typedef pair <FUNCTYPE, pair <T1, pair <T2, pair <T3, T4> > > > KEYTYPE;
	typedef map <KEYTYPE, RT> MAPTYPE;
	KEYTYPE key = make_pair(funcname, make_pair(val1, make_pair(val2, make_pair(val3, val4))));
	RT return_value;
	static MAPTYPE memo;
	typename MAPTYPE::iterator cur = memo.find(key);
	if (memo.end() == cur){
		return_value = funcname(val1, val2, val3, val4);
		memo.insert(make_pair(key, return_value));
	}
	else{
		return_value = (*cur).second;
	}
	return return_value;
}
template <class RT, class T1, class T2, class T3, class T4, class T5>
RT memoize(RT (*funcname)(T1, T2, T3, T4, T5), T1 val1, T2 val2, T3 val3, T4 val4, T5 val5)
{
	typedef RT (*FUNCTYPE)(T1, T2, T3, T4, T5);
	typedef pair <FUNCTYPE, pair <T1, pair <T2, pair <T3, pair <T4, T5> > > > > KEYTYPE;
	typedef map <KEYTYPE, RT> MAPTYPE;
	KEYTYPE key = make_pair(funcname, make_pair(val1, make_pair(val2, make_pair(val3, make_pair(val4, val5)))));
	RT return_value;
	static MAPTYPE memo;
	typename MAPTYPE::iterator cur = memo.find(key);
	if (memo.end() == cur){
		return_value = funcname(val1, val2, val3, val4, val5);
		memo.insert(make_pair(key, return_value));
	}
	else{
		return_value = (*cur).second;
	}
	return return_value;
}
