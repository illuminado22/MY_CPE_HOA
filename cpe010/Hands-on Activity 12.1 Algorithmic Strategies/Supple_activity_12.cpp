#include <iostream> 
#include <vector>

int countPaths(std::vector<std::vector<int>>& costMatrix, int m, int n, int cost){
    if (cost < 0) return 0;

    if (m == 0 && n == 0) 
        return cost == costMatrix[0][0] ? 1 : 0;

    if (m < 0|| n < 0) 
        return 0;
    
    return countPaths(costMatrix, m - 1, n, cost - costMatrix[m][n]) + 
           countPaths(costMatrix, m, n - 1, cost - costMatrix[m][n]);
}

int main(){
    std::vector<std::vector<int>> costMatrix = {
        {1, 2, 3},
        {4, 6, 5},
        {7, 8, 9}
    };
    int targetCost = 20;
    int i = costMatrix.size();
    int j = costMatrix[0].size();

    std::cout << "Number of paths with cost " << targetCost << ": " 
              << countPaths(costMatrix, i - 1, j - 1, targetCost) << std::endl;

    return 0;
}