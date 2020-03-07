#include <vector>
#include <string>

// not optimal, I know ;)

class Country {
public:
    Country(std::string name) { this->name = name; }
    std::string getName() { return this->name; }
    bool detachCountry(Country* country) { return true; }
private:
    std::string name;
};

class Union {
public:
    Union(std::string name) { this->name = name; }
    std::string getName() { return this->name; }
    bool attachCountry(Country* country) { return true; }
private:
    std::string name;
};

class World {
public:
    static World& instance()
    {
        static World _instance;
        return _instance;
    }
    ~World() {}
    Country* getCountry(std::string name) {
        return new Country(name);
    }
    Union* getUnion(std::string name) {
        return new Union(name);
    }
    std::string giveSupport() { return "OK, with pleasure!"; };
private:

    World() {}

    World( const World& );
    World & operator = (const World &);
};