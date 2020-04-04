#include <bits/stdc++.h>
#define ll long long
int main()
{
    ll t;
    std::cin >> t;
    ll tst = 1;
    while (t--)
    {
        std::string q;
        std::cin >> q;
        std::vector<ll> vc;
        ll n = q.length();
        for (ll i = 0; i < q.length(); i++)
        {
            vc.push_back(q[i] - '0');
        }
        std::cout << "Case #" << tst << ": ";
        ll cc = vc[0];
        while (cc--)
        {
            std::cout << '(';
        }
        std::cout << vc[0];

        for (ll i = 1; i < n; i++)
        {
            if (vc[i] - vc[i - 1] > 0)
            {
                ll c = abs(vc[i] - vc[i - 1]);
                while (c--)
                {
                    std::cout << '(';
                }
                std::cout << vc[i];
            }
            else if (vc[i] - vc[i - 1] == 0)
            {
                std::cout << vc[i];
            }
            else
            {
                ll c = abs(vc[i] - vc[i - 1]);
                while (c--)
                {
                    std::cout << ')';
                }
                std::cout << vc[i];
            }
        }
        while (vc[n - 1]--)
        {
            std::cout << ')';
        }

        std::cout << " " << std::endl;
        tst++;
    }
}