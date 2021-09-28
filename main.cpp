#include <iostream>
#include <algorithm>
#include <iterator>
#include "QLtemplate.h"


int main() {

    QueueList<int> lab;

    std::cout << "Push back:" << " ";

    lab.push_back(2);
    std::cout << lab << std::endl;

    lab.push_back(3);
    std::cout << lab << std::endl;

    lab.push_back(4);
    std::cout << lab << std::endl;


    std::cout<<"Print with range based for loop "<<std::endl;
    print(lab);

    std::cout << "Let's check the number of even digits:"<<' ';
    auto gg =std::count_if(lab.begin(),lab.end(),[](int i){return i % 2 == 0 ;});
    if(gg){
        std::cout<<gg<<std::endl;
    }


/*
    int b;
    std::cout<<"Please,enter your digit"<<std::endl;
     std::cin>>b;
     auto result=std::find(lab.begin(),lab.end(),b);
     (result != lab.end())
     ? std::cout << "lab contains " <<b << '\n'
     : std::cout << "lab does not contain " << b << '\n';
*/

    auto biggest = std::max_element(lab.begin(),lab.end());
    std::cout << "Max element is " << *biggest<<std::endl;

    auto smallest = std::min_element(lab.begin(),lab.end());
    std::cout << "Min element is " << *smallest<<std::endl;

    int m;
    std::cout <<" Please enter digit "<<std::endl;
    std::cin>>m;
    std::for_each(lab.begin(), lab.end(), [m](int &n){  if (n > m) n += 10;});
    print(lab);


    int z;
    std::cout <<" Please enter digit "<<std::endl;
    std::cin>>m;
    std::for_each(lab.begin(), lab.end(), [ z](int &n){  if (n < z) n -= 10;});
    print(lab);

    std::cout << "Pop front: " << std::endl;
    std::cout << lab << std::endl;


    std::cout << "Getting from front:" << " ";
    lab.front();
    std::cout << lab.front() << std::endl;

    std::cout << "Getting from back:" << " ";
    std::cout << lab.back() << std::endl;


    std::cout << "Size: " << lab.size() << std::endl;

    std::cout << "Checking if it is empty: " << lab.empty() << std::endl;

    std::cout << "Clear: " << std::endl;
    lab.clear();

    return 0;
}