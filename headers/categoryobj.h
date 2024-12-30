#ifndef CATEGORYOBJ_H
#define CATEGORYOBJ_H
#include <iostream>
#include <string>
using namespace std;

class Category {
    private:
        int cat_id;
        string cat_name;
    
    public:
        Category(); //default constructor
        ~Category(); //destructor
        
        //Rest of the function prototypes
        void set_cat_id(int);
        void set_cat_name(string);
        int get_cat_id();
        string get_cat_name();

        Category::Category() {
            //default constructor
        }

        Category::~Category() {
            //destructor
        }

        void Category::set_cat_id(int id) {
            cat_id = id;
        }

        void Category::set_cat_name(string name) {
            cat_name = name;
        }

        int Category::get_cat_id() {
            return cat_id;
        }

        string Category::get_cat_name() {
            return cat_name;
        }


};


#endif