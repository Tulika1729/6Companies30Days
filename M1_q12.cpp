using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,result;
        cin >> n;
        result=(n*(2*n+1)*(n+1))/6;
        cout << result <<endl;
    }
	return 0;
}
