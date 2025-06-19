#include <bits/stdc++.h>
using namespace std;

struct Sound {
    long long v, p;
    int original_idx;
};
vector<vector<pair<int, int>>>adj;
vector<bool> sound_used; 
vector<int> path_result; 

void find_eulerian_path_dfs(int u) {
    while (!adj[u].empty()) {
        auto [v, sound_idx] = adj[u].back(); // Get the last edge (neighbor, sound_idx)
        adj[u].pop_back(); // Remove it from u's adjacency list

        if (sound_used[sound_idx]) {
            continue; // This edge has already been used by the twin edge
        }
        sound_used[sound_idx] = true;

        std::vector<int> current_adj_ptr(adj.size(), 0); // Initialize with zeroes for all nodes

        std::stack<int> s;
        s.push(u);

        while (!s.empty()) {
            int curr = s.top();
            bool found_unvisited_edge = false;

            while (current_adj_ptr[curr] < adj[curr].size()) {
                auto& edge = adj[curr][current_adj_ptr[curr]]; // Use reference to modify if needed, or copy
                int neighbor = edge.first;
                int sound_idx_val = edge.second; // original_idx

                current_adj_ptr[curr]++; // Move pointer for next time this node is visited

                if (!sound_used[sound_idx_val]) {
                    sound_used[sound_idx_val] = true; // Mark sound as used
                    s.push(neighbor); // Push neighbor to stack
                    found_unvisited_edge = true;
                    break; // Move to the neighbor
                }
            }

            if (!found_unvisited_edge) {
            }
            s.pop();
        }
    }
}
vector<std::vector<std::pair<int, int>>> adj_nodes;
vector<int> adj_current_ptr; // adj_current_ptr[u] points to next edge in adj_nodes[u]

void find_eulerian_path_recursive(int u) {
    while (adj_current_ptr[u] < adj_nodes[u].size()) {
        auto& edge = adj_nodes[u][adj_current_ptr[u]];
        adj_current_ptr[u]++; // Increment pointer to next edge for this node
        
        int v = edge.first;
        int sound_idx = edge.second;

        if (sound_used[sound_idx]) {
            continue; // This sound (edge) has already been traversed by its symmetric counterpart
        }
        sound_used[sound_idx] = true; // Mark sound as used

        find_eulerian_path_recursive(v); // Recursively call for the neighbor
        path_result.push_back(sound_idx); // Add sound to path (in reverse order)
    }
}


void solve() {
    int n;
    std::cin >> n;

    std::vector<Sound> sounds(n);
    std::map<long long, int> v_to_compressed, p_to_compressed;
    int v_count = 0, p_count = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> sounds[i].v >> sounds[i].p;
        sounds[i].original_idx = i + 1;

        if (v_to_compressed.find(sounds[i].v) == v_to_compressed.end()) {
            v_to_compressed[sounds[i].v] = v_count++;
        }
        if (p_to_compressed.find(sounds[i].p) == p_to_compressed.end()) {
            p_to_compressed[sounds[i].p] = p_count++;
        }
    }

    int total_unique_coords = v_count + p_count;
    adj_nodes.assign(total_unique_coords, std::vector<std::pair<int, int>>());
    adj_current_ptr.assign(total_unique_coords, 0); 
    sound_used.assign(n + 1, false);
    path_result.clear();

    std::vector<int> degree(total_unique_coords, 0);

    for (int i = 0; i < n; ++i) {
        int compressed_v = v_to_compressed[sounds[i].v];
        int compressed_p = p_to_compressed[sounds[i].p] + v_count; 

        adj_nodes[compressed_v].push_back({compressed_p, sounds[i].original_idx});
        adj_nodes[compressed_p].push_back({compressed_v, sounds[i].original_idx});
        
        degree[compressed_v]++;
        degree[compressed_p]++;
    }

    int odd_degree_count = 0;
    int start_node = -1;
    for (int i = 0; i < total_unique_coords; ++i) {
        if (degree[i] % 2 != 0) {
            odd_degree_count++;
            start_node = i; // This will be one of the two odd-degree nodes
        }
        if (start_node == -1 && degree[i] > 0) { // If no odd degree, pick any node with degree > 0
            start_node = i;
        }
    }

    if (odd_degree_count > 2) {
        cout << "NO\n";
        return;
    }
    if (n == 0) { // Should not happen based on constraints, but good practice
        std::cout << "YES\n";
        return;
    }
    
    if (start_node == -1) { 
        std::cout << "NO\n"; // Should not be reached
        return;
    }


    find_eulerian_path_recursive(start_node);

    if (path_result.size() != n) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
        for (int i = path_result.size() - 1; i >= 0; --i) {
            std::cout << path_result[i] << (i == 0 ? "" : " ");
        }
        std::cout << "\n";
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}