#include <iostream>
using namespace std;

// Strategy Interface
class Strategy {
public:
    virtual void execute() = 0;
    virtual ~Strategy() {}
};

// Concrete Strategy A
class ConcreteStrategyA : public Strategy {
public:
    void execute() override {
        cout << "Executing Strategy A\n";
    }
};

// Concrete Strategy B
class ConcreteStrategyB : public Strategy {
public:
    void execute() override {
        cout << "Executing Strategy B\n";
    }
};

// Context
class Context {
private:
    Strategy* strategy;
public:
    Context(Strategy* strat) : strategy(strat) {}
    void setStrategy(Strategy* strat) { strategy = strat; }
    void executeStrategy() { strategy->execute(); }
};

int main() {
    ConcreteStrategyA stratA;
    ConcreteStrategyB stratB;
    
    Context context(&stratA);
    context.executeStrategy();  // Outputs: Executing Strategy A

    context.setStrategy(&stratB);
    context.executeStrategy();  // Outputs: Executing Strategy B

    return 0;
}
