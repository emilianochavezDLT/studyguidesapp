#ifndef STUDYGUIDEOBJ_H
#define STUDYGUIDEOBJ_H
#include <iostream>
#include <string>
using namespace std;

class StudyGuide {
    private:
        int sg_id;
        string sg_name;
    
    public:
        StudyGuide(); //default constructor
        ~StudyGuide(); //destructor
        
        //Rest of the function prototypes
        void set_sg_id(int);
        void set_sg_name(string);
        int get_sg_id();
        string get_sg_name();


    StudyGuide::StudyGuide() {
        //default constructor
    }

    StudyGuide::~StudyGuide() {
        //destructor
    }

    void StudyGuide::set_sg_id(int id) {
        sg_id = id;
    }

    void StudyGuide::set_sg_name(string name) {
        sg_name = name;
    }

    int StudyGuide::get_sg_id() {
        return sg_id;
    }

    string StudyGuide::get_sg_name() {
        return sg_name;
    }


};


#endif
