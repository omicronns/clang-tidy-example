struct Base {
    virtual void reimplementMe(int a) {}
};
struct Derived : public Base  {
    virtual void reimplementMe(int a) {}
};

int main() {
    int const a {1.2};
    return 0;
}
