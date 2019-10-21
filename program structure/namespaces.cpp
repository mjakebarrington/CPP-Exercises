/*
 * Namespaces allow us to group named entities that might otherwise be globally scoped
 * into narrower scopes. Variables, types, and functions can be included in a namespace.
 */
#include <iostream>

using namespace std;

// Namespaces are useful if we want to avoid name collisions, such as with int named a:
namespace foo
{
  int a = 2;
  // Variables within namespace can be accessed locally like normal:
  int b = a;
}

namespace bar
{
  int a = 4;
  void say_hi()
  {
    std::cout << "Hi!" << std::endl;
  }
}

namespace my_namespace
{
  int x=2, y=4, z=6;
  int a = 100;
}

int main()
{
  // Variables accessed from outside of namespace must be qualified with scope operator :: (namespace::element)
  cout << "a from namespace foo: " << foo::a << endl;
  cout << "a from namespace bar: " << bar::a << endl;

  // Functions must be prefixed by scope operator and suffixed with paranetheses and any arguments as usual.
  bar::say_hi();

  // We can avoid qualifying the name every time we want to invoke it through the using keyword:
  using foo::a;
  // From now on any time we refer to variable a, it will "get" a from namespace foo:
  cout << "No need for qualifying a anymore: " << a << endl;
  // => 2

  // Of course, if needed, we can still explicitly refer to bar a:
  cout << "Explicitly referring to bar a: " << bar::a << endl;
  // => 4

  /*
   * We can introduce an entire namespace with "using namespace my_namespace":
   */
   using namespace my_namespace;
   cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
   // => 2,4,6
   cout << "a is still: " << a << endl;
   // a causes a name collision because a is still defined as namespace foo from ln 42.

   // A solution would be to create separate blocks for foo::a and my_namespace

   /*
    * We can alias namespaces:
    */
    namespace biz = bar;
    cout << "Biz a is same as bar a now: " << biz::a << endl;

    // Style tip: When mixing libraries, explicit qualification of namespaces is preferred.
}
