#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
    public:
        Brain(void);
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        virtual ~Brain(void);
        void setIdea(int index, std::string idea);
        std::string getIdea(int index);
    private:
        std::string ideas[100];
};
#endif
