vector<vector<int>> computePreferencesMatrix(const vector<vector<int>>& preferences) { 
    vector<vector<int>> scores(preferences[0].size(), vector<int>(preferences[0].size(), 0)); 
 
    for (const vector<int>& ranking : preferences) { 
        for (int i = 0; i < ranking.size() - 1; i++) { 
            for (int j = i + 1; j < ranking.size(); j++) { 
                scores[ranking[i]][ranking[j]] += 1; 
            } 
        } 
    } 
 
    return scores; 
} 
 
vector<array<int, 2>> computeSongWeights(const vector<vector<int>>& preferences) { 
    vector<vector<int>> scores = computePreferencesMatrix(preferences); 
 
    vector<array<int, 2>> weights(preferences[0].size(), {0, 0}); 
 
    for (int i = 0; i < preferences[0].size(); i++) { 
        weights[i][0] = i; 
        if (i == preferences[0].size() - 1) continue; 
 
        for (int j = i + 1; j < preferences[0].size(); j++) { 
            int score = scores[i][j] - scores[j][i]; 
            if (score >= 0) { 
                weights[i][1]++; 
            } else { 
                weights[j][1]++; 
            } 
        } 
    } 
 
    return weights; 
} 
 
vector<int> getPopularityOrder(const vector<vector<int>>& preferences) { 
    vector<array<int, 2>> weights = computeSongWeights(preferences); 
 
    sort(weights.begin(), weights.end(), [](const auto& a, const auto& b) { 
        if (a[1] == b[1]) { 
            return a[0] < b[0]; 
        } else { 
            return b[1] < a[1]; 
        } 
    }); 
 
    vector<int> order; 
    for (const auto& x : weights) { 
        order.emplace_back(x[0]); 
    } 
 
    return order;
}