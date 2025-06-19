#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

// Using map for memoization to store states: (current_hps_vector, rounds_left) -> probability
// current_hps_vector needs to be sorted for canonical representation
map<vector<int>, vector<double>> memo;
int N_val; // Global N for the current test case
double P_val; // Global P for the current test case

// Recursive function with memoization
double solve(vector<int> current_hps, int rounds_left) {
    // Check if all monsters are at HP 1
    bool all_one = true;
    for (int hp : current_hps) {
        if (hp != 1) {
            all_one = false;
            break;
        }
    }
    if (all_one) {
        return 1.0;
    }

    // Base case: No rounds left
    if (rounds_left == 0) {
        return 0.0;
    }

    // Sort HPs for canonical representation in memoization key
    sort(current_hps.begin(), current_hps.end());

    // Check memoization table
    if (memo.count(current_hps) && memo[current_hps].size() > rounds_left && memo[current_hps][rounds_left] != -1.0) {
        return memo[current_hps][rounds_left];
    }

    double res = 0.0;

    int min_h = current_hps[0];
    int max_h = current_hps[N_val - 1];

    // Option 1: Sword shines (probability P_val)
    double prob_if_shine_scenario;
    if (min_h >= 2) { // Can perform shining attack without reducing HP to 0
        vector<int> next_hps_shine = current_hps;
        for (int i = 0; i < N_val; ++i) {
            next_hps_shine[i]--;
        }
        prob_if_shine_scenario = solve(next_hps_shine, rounds_left - 1);
    } else { // Cannot perform shining attack (some monster is at HP 1)
        prob_if_shine_scenario = solve(current_hps, rounds_left - 1); // Do nothing
    }
    res += P_val * prob_if_shine_scenario;

    // Option 2: Sword doesn't shine (probability 1 - P_val)
    double prob_if_no_shine_scenario = 0.0;
    if (max_h == 1) { // All monsters are 1. Goal achieved. Do nothing.
        prob_if_no_shine_scenario = solve(current_hps, rounds_left - 1);
    } else { // Some monsters are not 1. Must attack. Choose optimally.
        double best_prob_individual_attack = 0.0;
        for (int i = 0; i < N_val; ++i) {
            if (current_hps[i] > 1) {
                vector<int> next_hps_individual = current_hps;
                next_hps_individual[i]--;
                best_prob_individual_attack = max(best_prob_individual_attack, solve(next_hps_individual, rounds_left - 1));
            }
        }
        prob_if_no_shine_scenario = best_prob_individual_attack;
    }
    res += (1.0 - P_val) * prob_if_no_shine_scenario;

    // Store result in memoization table
    if (memo.find(current_hps) == memo.end()) {
        memo[current_hps].resize(rounds_left + 1, -1.0);
    }
    memo[current_hps][rounds_left] = res;
    
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, p_prime;
        cin >> n >> m >> p_prime;
        N_val = n;
        P_val = p_prime / 100.0;

        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        memo.clear();
        cout << fixed << setprecision(6) << solve(h, m) << endl;
    }
    return 0;
}