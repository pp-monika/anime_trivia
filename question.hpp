#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

class Question {

    private:
        unsigned int id;                        // Unique identifier of the question
        std::string question;                   // Question sentence
        std::string answer;                     // Answer corresponsing to the question
        std::vector<std::string> topics;        // All topics that the question belongs to

    public:
        Question(unsigned int id, std::string question, std::string answer, std::vector<std::string> topics);

        unsigned int getId();
        std::string getQuestion();
        std::string getAnswer();
        std::vector<std::string> getTopics();

        bool editId(unsigned int id);
        bool editQuestion(std::string newQuestion);
        bool editAnswer(std::string newAnswer);
        bool addTopics(std::string newTopic);
        bool removeTopics(std::string topic);
        bool clearTopics();

        void printQuestion();

};


#endif