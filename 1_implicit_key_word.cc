/**
 * https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
 * The compiler is allowed to make one implicit conversion to 
 * resolve the parameters to a function. This means that the 
 * compiler can use constructors callable with a single parameter
 * to convert from one type to another in order to get the right
 * type for a parameter.
 */
class Foo {
public:
    // Single parameter constructor, can be used as an implicit conversion.
    // Such a constructor is called "converting constructor". So, the 
    // compiler can convert int -> Foo, unless the explicit key-word is
    // used, using it one tells the compiler to avoid this coversion.
    Foo(int x) {}
    //explicity  Foo(int x) {}
};

class Faz {
public:
    // Also a converting constructor from Foo to Faz.
    Faz(Foo foo) {}
};

// The parameter is of type Foo, not of type int, so it looks like
// we have to pass a Foo, but since the Foo constructor is not
// implicit, if one passes an integer, the compiler is allowed to
// convert from int to Foo as once implicity conversion is allowed.
void bar(Foo foo);

int main() {
    // The converting constructor allows us to pass an int.
    bar(42); //42 -> Foo(42) from int to foo.
    // Also allowed thanks to the converting constructor.
    Foo foo = 42; //42 -> Foo(42) again from int to foo.
    // int -> fazz demand int -> Foo -> Faz, but the compiler
    // is not allowed to resolve types by more than a single
    // conversion, so the next line resuts in an error.
    //Faz faz = 42;
}
