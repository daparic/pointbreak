
class A
{
public:
    int foo1()         // Violation - can be static
    {
        return m_s;
    }
    int foo2()         // Violation - can be const
    {
        return m_i;
    }

private:
    int m_i;
    static int m_s;
};

int main(int argc, char* argv[])
{
    return 0;
}
