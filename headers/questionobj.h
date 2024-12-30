#ifndef QUESTIONOBJ_H
#define QUESTIONOBJ_H
#include <iostream>
#include <string>
using namespace std;

class Question{

    private:
        int q_id;
        string question;
        int belongs_to_studyguide;
        int in_category;
        


    public:
        Question(); //default constructor
        ~Question(); //destructor
        //Rest of the function prototypes
        void set_q_id(int);
        void set_question(string);
        void set_belongs_to_studyguide(int);
        void set_in_category(int);
        int get_q_id();
        string get_question();
        int get_belongs_to_studyguide();
        int get_in_category();

    Question::Question() {
        //default constructor
    }

    Question::~Question() {
        //destructor
    }

    void Question::set_q_id(int id) {
        q_id = id;
    }

    void Question::set_question(string q) {
        question = q;
    }

    void Question::set_belongs_to_studyguide(int sg) {
        belongs_to_studyguide = sg;
    }

    void Question::set_in_category(int cat) {
        in_category = cat;
    }

    int Question::get_q_id() {
        return q_id;
    }

    string Question::get_question() {
        return question;
    }

    int Question::get_belongs_to_studyguide() {
        return belongs_to_studyguide;
    }

    int Question::get_in_category() {
        return in_category;
    }

};


#endif