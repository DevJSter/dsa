#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num_numbers, num_clusters;
    cout << "Enter the number of numbers: ";
    cin >> num_numbers;

    cout << "Enter the number of clusters (k): ";
    cin >> num_clusters;

    vector<int> numbers(num_numbers);

    cout << "Enter " << num_numbers << " numbers:" << endl;
    for (int i = 0; i < num_numbers; ++i) {
        cin >> numbers[i];
    }

    vector<int> means(num_clusters);

    cout << "Enter initial mean values for each cluster:" << endl;
    for (int i = 0; i < num_clusters; ++i) {
        cin >> means[i];
    }

    vector<vector<int>> clusters(num_clusters);

    while (true) {
        // Clear clusters
        for (int i = 0; i < num_clusters; ++i) {
            clusters[i].clear();
        }

        // Assign each number to the nearest cluster
        for (int num : numbers) {
            int min_distance = abs(num - means[0]);
            int min_index = 0;
            for (int i = 1; i < num_clusters; ++i) {
                int distance = abs(num - means[i]);
                if (distance < min_distance) {
                    min_distance = distance;
                    min_index = i;
                }
            }
            clusters[min_index].push_back(num);
        }

        // Update means
        vector<int> new_means(num_clusters);
        for (int i = 0; i < num_clusters; ++i) {
            int sum = 0;
            for (int num : clusters[i]) {
                sum += num;
            }
            if (!clusters[i].empty()) {
                new_means[i] = sum / clusters[i].size();
            } else {
                // Handle empty cluster to avoid division by zero
                new_means[i] = means[i];
            }
        }

        // Check for convergence
        if (means == new_means) {
            break;
        }

        // Update means for the next iteration
        means = new_means;
    }

    // Output clusters
    for (int i = 0; i < num_clusters; ++i) {
        cout << "Cluster " << i + 1 << ": ";
        for (int num : clusters[i]) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
