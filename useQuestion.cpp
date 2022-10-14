#include "question.cpp"
#include <iostream>

int main(int argc, char *argv[]) {

    std::vector<std::string> t{"character", "FMA:B"};
    Question q(1, "Who is the protagonist of FMA:B?", "Edward Elric", t);

    std::cout << q.getId() << std::endl;
    std::cout << q.getQuestion() << std::endl;
    std::cout << q.getAnswer() << std::endl;

    for (std::string t1 : q.getTopics()) {
        std::cout << t1 << " ";
    }
    std::cout << std::endl;

    q.printQuestion();


    return 0;
}