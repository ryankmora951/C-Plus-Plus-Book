// C++ Stores and access all its values in memory directly and not through references like Java

/*

Data data{5};
Data more{6};
data = more; 
more.value = 7;
cout << data.value << '\n'; // still 6

*/


/*

// use make_shared<Data>(`#`) to release the heap and garbage collect through a shared pointer
// -> is a pointer that points to the value needed to be returned, but does not change any values


// https://godbolt.org/z/WM11Gs6sz
auto data = make_shared<Data>(5);
auto more = make_shared<Data>(6);
data = more;
more->value = 7;
cout << data->value << '\n'; // now also 7


// Same example without wrapper objects created by make_shared 
// Data* creates a new Data* pointer for data

// https://godbolt.org/z/Ee7eqq1MY
Data* dataOwner = new Data(5)
Data* data = dataOwner;
Data* more = new Data(6);
data = more;
more->value = 7;
cout << data->value << '\n'; \\ now also 7



*/