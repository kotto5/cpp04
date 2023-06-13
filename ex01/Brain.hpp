#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define BRAIN_SIZE 100

class Brain {
    private:
        std::string *ideas_;
        void         setDefaultIdeas(void);
    public:
        Brain();
        // Brain(std::string (&ideas)[100]);
        Brain(std::string *&ideas);
        // Brain(std::string *ideas);
        Brain(const Brain &other);
        Brain   &operator=(const Brain &other);
        ~Brain();
        void    printIdeas(void);
};

#endif
