/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Snowdon
 */

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void test_one(const int);
void test_two(int);
void test_three(const string);
void test_four(string);

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

int main()
{
    int value = 5;
    string word = "boo";
    try {
    test_one(value);
    } catch (exception e) {}
    try {
    test_two(value);
    } catch (exception e) {}
    try {
    test_three(word);
    } catch (exception e) {}
    try {
    test_four(word);
    } catch (exception e) {}

    return 0;
}