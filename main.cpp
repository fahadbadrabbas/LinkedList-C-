#include "LinkedList.h"
#include "LinkedList.cpp"
#include <cassert>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
     LinkedList ls;
     ls.insertToFront("Hawkeye");
     ls.insertToFront("Thor");
     ls.insertToFront("Hulk");
     ls.insertToFront("Black Widow");
     ls.insertToFront("Iron Man");
     ls.insertToFront("Captain America");

     for (int k = 0; k < ls.size(); k++) {
         string x;
         ls.get(k, x);
         cout << x << endl;
     }

    // -------------------------------------- //

    // LinkedList ls;
    // ls.insertToFront("The Mandalorian");
    // ls.insertToFront("Baby Yoda");
    // ls.insertToFront("Cara Dune");
    // ls.insertToFront("Greef Karga");

     ls.printList();
     ls.printReverse();

    // -------------------------------------- //

    // LinkedList e1;
    // e1.insertToFront("Athos");
    // e1.insertToFront("Porthos");
    // e1.insertToFront("Aramis");
    // LinkedList e2;
    // e2.insertToFront("Robin");
    // e2.insertToFront("Batman");
    // e1.append(e2); // adds contents of e2 to the end of e1
    // string s;
    // assert(e1.size() == 5 && e1.get(3, s) && s == "Batman");
    // assert(e2.size() == 2 && e2.get(1, s) && s == "Robin");
    // cout << "All OKAY!!!!" << endl;

    // -------------------------------------- //

    // LinkedList e1;
    // e1.insertToFront("Jim");
    // e1.insertToFront("Oz");
    // e1.insertToFront("Paul");
    // e1.insertToFront("Kevin");
    // e1.reverseList(); // reverses the contents of e1
    // string s;
    // assert(e1.size() == 4 && e1.get(0, s) && s == "Jim");
    // cout << "All OKAY!!!!" << endl;

    // -------------------------------------- //

    LinkedList e1;
    e1.insertToFront("A");
    e1.insertToFront("B");
    e1.insertToFront("C");
    e1.insertToFront("D");
    LinkedList e2;
    e2.insertToFront("X");
    e2.insertToFront("Y");
    e2.insertToFront("Z");
    e1.swap(e2); // exchange contents of e1 and e2
    string s;
    assert(e1.size() == 3 && e1.get(0, s) && s == "Z");
    assert(e2.size() == 4 && e2.get(2, s) && s == "B");
    cout << "All OKAY!!!!" << endl;

    

}
