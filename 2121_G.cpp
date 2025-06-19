#include <bits/stdc++.h>
using namespace std;

const int MAX_BALANCE_RANGE = 400005;
long long bit_count[MAX_BALANCE_RANGE];
long long bit_sum[MAX_BALANCE_RANGE];
int bit_size;

void update(long long bit[], int idx, long long val)
{
    for (++idx; idx <= bit_size; idx += idx & -idx)
    {
        bit[idx] += val;
    }
}

long long query(long long bit[], int idx)
{
    long long sum = 0;
    for (++idx; idx > 0; idx -= idx & -idx)
    {
        sum += bit[idx];
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int offset = n;
        bit_size = 2 * n + 1;
        for (int i = 0; i <= bit_size; i++)
        {
            bit_count[i] = 0;
            bit_sum[i] = 0;
        }
        long long total_abs_diff_sum = 0;
        long long current_balance = 0;
        update(bit_count, current_balance + offset, 1);
        update(bit_sum, current_balance + offset, current_balance + offset);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                current_balance++;
            }
            else
            {
                current_balance--;
            }
            long long mapped_balance = current_balance + offset;
            long long lesser_or_equal_count = query(bit_count, mapped_balance);
            long long lesser_or_equal_sum_mapped = query(bit_sum, mapped_balance);
            long long lesser_or_equal_sum_actual = lesser_or_equal_sum_mapped - lesser_or_equal_count * offset;
            long long total_previous_count = i + 1;
            long long total_previous_sum_mapped = query(bit_sum, bit_size - 1);
            long long greater_count = total_previous_count - lesser_or_equal_count;
            long long greater_sum_mapped = total_previous_sum_mapped - lesser_or_equal_sum_mapped;
            long long greater_sum_actual = greater_sum_mapped - greater_count * offset;
            total_abs_diff_sum += current_balance * lesser_or_equal_count - lesser_or_equal_sum_actual;
            total_abs_diff_sum += greater_sum_actual - current_balance * greater_count;
            update(bit_count, mapped_balance, 1);
            update(bit_sum, mapped_balance, mapped_balance);
        }
        long long sum_of_lengths = (long long)n * (n + 1) * (n + 2) / 6;
        long long final_answer = sum_of_lengths / 2 + total_abs_diff_sum / 2;
        cout << final_answer << endl;
    }
    return 0;
}