# Exceptions
## About
This project explores the concept of dealing with runtime errors without breaking the code. The main lesson is to learn the _try-catch-throw_ construct. This will allow a section of code to be tested and if a runtime error occurs then an exception is thrown and is "caught" by the catch block. The catch block contains the code that will "handle" the runtime error. This will prevent programs from crashing and will give the user more information on the error that is occuring. The catch block can be used to display a message to the user. Exception classes can also be declared in a class that can be used to signal other catch blocks in other code files.

## Examples
```
try
	{
		result = divide(num1, num2);
		cout << "The result is " 
<< result << endl;
	}
	catch (const char* exceptionString)
	{
		cout << exceptionString;
	}
```
```
class Rectangle
{
private:  
  double width;
  double length;
public:  
  Rectangle()
  { width = 0; length = 0; }

  ~Rectangle(){}

  double getArea()const
  { return width * length; }

// Exception class
class NegativeWidth { };


// Exception class
class NegativeLength { };
```
```
catch(Rectangle::NegativeWidth)
{
  cout << "Error:  A negative value was entered.\n";
}
catch(Rectangle::NegativeLength)
{
  cout << "Error:  A negative value was entered.\n";
}

```

## HW10a
This program will "throw" a bad_alloc exception to the catch block and the exception will be displayed to the console. A bad_alloc exception happens when the computer doesn't have any more memory to allocate to dynamically created items. The program will attempt to create an array of pointers holding 500 arrays of 50000000 doubles in order to force the bad_alloc exception.

## HW10b
This program will "throw" a message error if the number input by the user is a negative number. The catch block will display the error message to the user and the program will close. If there is no error then the program will calculate the sum of all the positive integers that were input by the user.


