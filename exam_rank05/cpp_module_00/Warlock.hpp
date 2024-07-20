#ifndef  WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

class Warlock
{
    public:
        std::string const &getName() const;
        std::string const &getTitle() const;
        void    setTitle(std::string _title);


        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        void introduce() const;
    private:
        std::string _name;
        std::string _title;
        Warlock(const Warlock &other);
        Warlock& operator=(const Warlock &other);
};


#endif
