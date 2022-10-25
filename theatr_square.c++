#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n,m,a;
    cin>>n>>m>>a;

    long long horizontal=ceil(n/a);
    long long vertical=ceil(m/a);
    long long total=horizontal*vertical;
    cout<<total;
    return 0;
}
