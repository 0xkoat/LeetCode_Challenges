
using namespace std;
class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int result = numBottles;

        while ((numBottles / numExchange) != 0)
        {
            int newBottles = numBottles / numExchange;
            int rest = numBottles % numExchange;
            result += newBottles;
            numBottles = newBottles + rest;
        }
        return result;
    }
};