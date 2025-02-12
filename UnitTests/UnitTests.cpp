#include "dividing.h"
#include "Vertex.h"
#include "Edge.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(DividingTests)
    {
    public:

        TEST_METHOD(TestDividingAddition)
        {
            dividing d1(1, 2);
            dividing d2(1, 3);
            dividing result = d1 + d2;
            Assert::AreEqual(5, result.get_numerator());
            Assert::AreEqual(6, result.get_denominator());
        }

        TEST_METHOD(TestDividingMultiplication)
        {
            dividing d1(2, 3);
            dividing d2(3, 4);
            dividing result = d1 * d2;
            Assert::AreEqual(6, result.get_numerator());
            Assert::AreEqual(12, result.get_denominator());
        }
    };

    TEST_CLASS(VertexTests)
    {
    public:

        TEST_METHOD(TestVertexInitialization)
        {
            Vertex v(2.5, 3.5);
            Assert::AreEqual(2.5f, v.get_x());
            Assert::AreEqual(3.5f, v.get_y());
        }
    };

    TEST_CLASS(EdgeTests)
    {
    public:

        TEST_METHOD(TestEdgeCreation)
        {
            Vertex v1(1.0, 2.0);
            Vertex v2(3.0, 4.0);
            Edge edge(v1, v2);

            Assert::AreEqual(1.0f, edge.get_start().get_x());
            Assert::AreEqual(2.0f, edge.get_start().get_y());
            Assert::AreEqual(3.0f, edge.get_end().get_x());
            Assert::AreEqual(4.0f, edge.get_end().get_y());
        }
    };
}

int main() {
    return 0;
}
