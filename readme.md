# Chapter 8 Exercise 14
## The following was asked:
Can we declare a non-reference function argument const (e.g., void f(const int);)?
What might that mean? 
Why might we want to do that?
Why don’t people do that often? 
Try it; write a couple of small programs to see what works.

## Response:
The idea of the const or "constant" keyword at first sounds very simple, but when you look
at the bigger picture it's application is very powerful. When you declare the const
your are finalzing the variable or declaring that the value cannot and will not change.
Programmers do this to not only ensure that others dont accidentally change the value when editing the function,
but it also allows the programmer to tell the compilier that it doesn't need prepare any change in memory for that value.
People don't do this often because either that aren't aware of this application or they don't work with others.
Working with others on a programming project force each member of the process to understand and document what they are wokring on.
That five letter keyword, "const", can save programs from crashing due to programmers changing something they weren't suppose to.
### Example
As you can see in "app.cpp" we have four example functions. This is how they are constructed:
```
void test_one(const int i)
{   
    cout << "test 1: " << i << "\n";
    i = i + 5;
    cout << "test 1: " << i << "\n";
}

void test_two(int i)
{
    cout << "test 2: " << i << "\n";
    i = i + 5;
    cout << "test 2: " << i << "\n";
}

void test_three(const string s)
{
    cout << "test 3: " << s << "\n";
    s = s + 'k';
    cout << "test 3: " << s << "\n";
}

void test_four(string s)
{
    cout << "test 4: " << s << "\n";
    s = s + 'k';
    cout << "test 4: " << s << "\n";
}
```
Out of the four, two fail; test one and three fail. Obviously the example is bit basic, but larger applications such as dealing with large data that is intended to be 
not interacted with for run-time sake is a better example.
### The Take Away
What this teaches or should teach you is that coding isn't just about telling a computer how to work, coding is about letting those that code along side you understand
what you are telling the computer as well.