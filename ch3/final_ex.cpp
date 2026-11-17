// 'Final' prevents data from pointing to anything else other than 5
final Data data = new Data(5);

// Const can be used in a differentiated way - to tell the compiler a variable, object, or pointer, cannot be modified after it is initialized
Data const * data new Data(5);
data->value = 7; // this const protects Data being pointed to, so data does not change what it is pointing to
data = new Data(6); // reassigning the pointer is okay because it moves the pointer away from the old value to this new one
Data * const more = new Data(8); // protects the pointer from being changed, but the data the pointer points to can change
more->value = 9; // now okay because data can be changed
more = new Data(10); // reference is protected and 'more' cannot create a new reference

/*
Data * const more: The pointer or reference is protected
Data const * data: The value data is protected
const Data * data: Alternative for Data const *, where the value data is protected
Data const * const more: Both the value and pointer and protected
*/