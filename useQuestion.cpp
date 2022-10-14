#include "question.cpp"
#include <iostream>

int main(int argc, char *argv[]) {

    std::cout << std::endl;

    // Construct a question
    std::vector<std::string> t{"character", "FMA:B"};
    Question q(1, "Who is the protagonist of FMA:B?", "Edward Elric", t);


    // Test getter functions
    std::cout << "Test getter functions" << std::endl;
    std::cout << q.getId() << std::endl;
    std::cout << q.getQuestion() << std::endl;
    std::cout << q.getAnswer() << std::endl;

    for (std::string t1 : q.getTopics()) {
        std::cout << t1 << " ";
    }
    std::cout << std::endl;
    std::cout << "------------------------------" << std::endl;


    // Test setter functions
    std::cout << "Test setter functions" << std::endl;
    q.setId(2);
    std::cout << q.getId() << std::endl;
    q.setQuestion("What is Edward Elric's alchemist name?");
    std::cout << q.getQuestion() << std::endl;
    q.setAnswer("Fullmetal Alchemist");
    std::cout << q.getAnswer() << std::endl;
    std::cout << "------------------------------" << std::endl;


    // Topics vector functions
    std::cout << "Test topics vector functions" << std::endl;
    q.addTopics("anime");
    for (std::string t1 : q.getTopics()) {
        std::cout << t1 << " ";
    }
    std::cout << std::endl;

    q.removeTopics("FMA:B");
    for (std::string t1 : q.getTopics()) {
        std::cout << t1 << " ";
    }
    std::cout << std::endl;

    q.clearTopics();
    for (std::string t1 : q.getTopics()) {
        std::cout << t1 << " ";
    }
    std::cout << std::endl;
    std::cout << "------------------------------" << std::endl;

    std::cout << "Test print function" << std::endl;
    q.printQuestion();


    return 0;
}
