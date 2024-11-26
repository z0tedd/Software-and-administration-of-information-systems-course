#include <QCoreApplication>
#include <iostream>
#include <QChar>
#define range(i,n) for(size_t i = 1;i<n;i++)
#include <vector>//
#include <string>
using namespace std;
void solve(){
    //string a1,b1;
    QTextStream in(stdin);
    QString a,b;
    in >> a>> b;
    //cin >> a1  >> b1;
    //QString a(a1.c_str()), b(b1.c_str());
    int N = 97;
    int sz = 26;
    vector<int> count1(sz,0),count2(sz,0);
    foreach (QChar c, a) {
        count1[c.toLatin1() - N]++;
    }
    foreach (QChar c, b) {
        count2[c.toLatin1() - N]++;
    }

    int point1 = 0, point2 = 0;
    vector<char> ans;
    for (char c = 'z';c>= 'a';c--){
        while(count1[int(c)-N] > 0 && count2[int(c)-N] > 0){
            ans.push_back(c);
            while(a[point1]!=c){
                count1[(a[point1]).toLatin1()-N]--;
                point1++;
            }
            count1[(a[point1]).toLatin1()-N]--;
            point1++;

            while(b[point2]!=c){
                count2[(b[point2]).toLatin1()-N]--;
                point2++;
            }
            count2[(b[point2]).toLatin1()-N]--;
            point2++;
        }
    }
    QTextStream out(stdout);
    for (char c: ans) out  << c;

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    solve();


    //cout.tie(0); Для магических компиляторов.
    //String transformation to lower case, using cctype.
    //transform(a.begin(), a.end(), a.begin(),
    //    [](unsigned char c){ return std::tolower(c); });
    //
    //
    //
    //

    return a.exec();
}
