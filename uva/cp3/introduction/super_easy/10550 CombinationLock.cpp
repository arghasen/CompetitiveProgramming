#include <bits/stdc++.h>
using namespace std;

auto rotation = 360;
auto totalNos = 40;
int numbersRotated(int a, int b)
{
    if (a<b)
        return (totalNos+a-b);
    else
        return (a-b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int a,b,c,d;
    auto rotation = 360;
    auto totalNos = 40;
    auto degreesPerNum = rotation/totalNos;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 &&c==0&&d==0)
            break;
        
        decltype(degreesPerNum) rotationFirstNumber, rotationSecondNumber, rotationThirdNumber;

        rotationFirstNumber = numbersRotated(a,b)*degreesPerNum;
        rotationSecondNumber = numbersRotated(c,b)*degreesPerNum;
        rotationThirdNumber = numbersRotated(c,d)*degreesPerNum;
        auto degreesToRotate = 2*rotation + rotationFirstNumber +  rotation +rotationSecondNumber + rotationThirdNumber;
        cout<<degreesToRotate<<endl;
    }
    return 0;
}

/**
 * Important:
 * Note that when we are rotating clockwise our reading moves anticlockwise. This is the important part to solve this
 * check https://www.youtube.com/watch?v=f_7J2GoQLVk for details
 * /