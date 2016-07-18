/*
// make boost::lamda functionality visible.
using namespace boost::lambda;

std::vector<int> v;

// for ech element x in v print x * 2 + 10;
// "_1" is the Lambda library placeholder for current element.
std::for_each(v.begin(), v.end(), std::cout << _1 * 2 + 10 << std::endl);

// create a list-like compile-time container of three types
// (float, double, and long double) and call container floats
typedef boost::mpl::list<float, double, long double> floats;

// create a new compile-time list of types consisting of the types
// in "floats" plus "int" inserted at the front; call the new container "types"
typedef boost::mpl::push_front<floats, int>::type types;
*/

int main()
{
	return 0;
}