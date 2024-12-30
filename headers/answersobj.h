#ifndef ANSWERSOBJ_H
#define ANSWERSOBJ_H
#include <iostream>
#include <string>
using namespace std;

class Answers{
    private:
        int a_id;
        string answer;
        int question_id;

    public:
        Answers(); //default constructor
        ~Answers(); //destructor
        //Rest of the function prototypes
        void set_a_id(int);
        void set_answer(string);
        void set_question_id(int);
        int get_a_id();
        string get_answer();
        int get_question_id();

        Answers::Answers() {
            //default constructor
        }

        Answers::~Answers() {
            //destructor
        }

        void Answers::set_a_id(int id) {
            a_id = id;
        }

        void Answers::set_answer(string a) {
            answer = a;
        }

        void Answers::set_question_id(int q_id) {
            question_id = q_id;
        }

        int Answers::get_a_id() {
            return a_id;
        }

        string Answers::get_answer() {
            return answer;
        }

        int Answers::get_question_id() {
            return question_id;
        }        

};


#endif