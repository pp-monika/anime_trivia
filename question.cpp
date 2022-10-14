#include "question.hpp"
#include <iostream>
#include <algorithm>


Question::Question(unsigned int id, std::string question, std::string answer, std::vector<std::string> topics) {

    this->id = id;
    this->question = question;
    this->answer = answer;
    this->topics = topics;

}

unsigned int Question::getId() {
    return id;
}

std::string Question::getQuestion() {
    return question;
}

std::string Question::getAnswer() {
    return answer;
}

std::vector<std::string> Question::getTopics() {
    return topics;
}

bool Question::editId(unsigned int id) {

    if (id == 0) {
        std::cout << "A question's id must be greater than 0." << std::endl;
        return false;
    }

    this->id = id;
    return true;
    
}

bool Question::editQuestion(std::string newQuestion) {

    if (newQuestion.empty()) {
        std::cout << "A question cannot be empty." << std::endl;
        return false;
    }
    
    question = newQuestion;
    return true;
    
}

bool Question::editAnswer(std::string newAnswer) {

    if (newAnswer.empty()) {
        std::cout << "An answer cannot be empty." << std::endl;
        return false;
    }

    answer = newAnswer;
    return true;
    
}

bool Question::addTopics(std::string newTopic) {

    if (newTopic.empty()) {
        std::cout << "Topic name cannot be empty." << std::endl;
        return false;
    }

    topics.push_back(newTopic);
    return true;
    
}

bool Question::removeTopics(std::string topic) {

    if (topic.empty()) {
        std::cout << "Topic name cannot be empty." << std::endl;
        return false;
    }

    auto index = std::find(topics.begin(), topics.end(), topic);

    if (index == topics.end()) {
        std::cout << "This question doesn't belong to the given topic." << std::endl;
        return false;
    }

    topics.erase(index);
    return true;

}

bool Question::clearTopics() {

    topics.clear();
    return true;

}

void Question::printQuestion() {

    std::cout << getId() << std::endl;
    std::cout << getQuestion() << std::endl;
    std::cout << getAnswer() << std::endl;

    for (std::string t1 : getTopics()) {
        std::cout << t1 << " ";
    }
    std::cout << std::endl;

}

