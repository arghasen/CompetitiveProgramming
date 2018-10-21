// Write your Student class here
#include <numeric>
class Student{
    int scores[5];
    public:
    void input()
    {
        for(int i=0; i<5;i++)
            cin>>scores[i];
    }
    int calculateTotalScore()
    {
        return std::accumulate(scores,scores+5,0);
    }
};