#include<iostream>
#include<string>
#include "Alligator.hpp"

Alligator::Alligator(){
}

Alligator::Alligator(std::string name_, std::string hunger_level_, std::string owner_, int age_){
    name = name_;
    hunger_level = hunger_level_;
    owner = owner_;
    age = age_;
}

void Alligator::becomeOlder(){
    age += 1;
}

void Alligator::swampTransfer(std::string new_owner){
    owner = new_owner;
}

void Alligator::gatorGrowl(){
    std::cout << "Chomp Chomp! Go Gators!" << std::endl;

    std::cout << "Name: "<< getName() << std::endl;
    std::cout << "Hunger Level: " << getHungerLevel() << std::endl;
    std::cout << "Owner: " << getOwner() << std::endl;
    std::cout << "Age: " << getAge() << std::endl;
}

std::string Alligator::getName(){
    return name;
}

std::string Alligator::getHungerLevel(){
    return hunger_level;
}

std::string Alligator::getOwner(){
    return owner;
}

int Alligator::getAge(){
    return age;
}




