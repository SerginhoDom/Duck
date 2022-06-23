#include <iostream>

#ifndef _CLASS_
#define _CLASS_

namespace Duck {

    class notQuack {
    public:
        static void quack();
    };

    class Quack {
    public:
        static void quack();
    };

    class Fly {
    public :
        static void fly();
    };

    class notFly {
    public:
        static void fly();
    };

    class Duck_base {
    public:
        void swim();
        virtual void quack() = NULL;
        virtual void display() = NULL;
        virtual void fly() = NULL;
    };

    template<typename _Quack, typename _Fly>
    class Duck : public Duck_base {
    public:
        void quack() override {
            _Quak::quak();
        }
        void fly() override {
            _Fly::fly();
        }
        virtual void display() = NULL;
    };
    class MarlladDuck : public Duck<Quak, Fly>{
    public:
        void display() override;
    };

    class RedheadDuck : public Duck<Quak, Fly> {
    public:
        void display() override;
    };

}

#endif