// declaring bar as a global variable of type int and
// defining the decimal value 10 as initial value of bar
int bar = 10;

// declaring main as a procedure with no arguments and return type int
int main() {
  // defining main to be the following code

  // while bar is greater than the decimal value 0 ...
  // otherwise continue to the return statement below
  while (bar > 0) {
    // ... subtract the decimal value 1 from bar and assign the result to bar
    bar = bar - 1;

    // go back to the while statement and check again
  }

  // return the value of bar as the result of the invocation of main
  return bar;
}