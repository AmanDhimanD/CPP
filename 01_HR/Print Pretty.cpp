#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout<<std::hex<<std::left<<std::showbase<<std::nouppercase;
    cout<<(long long) A<<endl;
    cout << std::dec << std::right << std::setw(15) << std::setfill('_') <<std::showpos << std::fixed << std::setprecision(2);  
            cout << B << endl;

        cout << std::scientific << std::uppercase<<std::noshowpos<<std::setprecision(9);     
            cout << C << endl;
	}
	return 0;

}
