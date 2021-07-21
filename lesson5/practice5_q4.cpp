#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Enter candidate's name and the votes received by the candidate.\n";
    vector<string> names;
    vector<int> votes;
    for (int i = 0; cin.peek() != '\n'; i++) {
        string name;
        int vote;
        cin >> name >> vote;
        names.push_back(name);
        votes.push_back(vote);
        while (cin.peek() == ' ') cin.get();
        if (cin.peek() == '\n') cin.get();
    }
    double total = 0;
    for (int i = 0; i < votes.size(); i++) {
        total += votes[i];
    }
    cout << left << setw(20) << "Candidate";
    cout << setw(20) << "Votes Received";
    cout << setw(20) << "\% of Total Votes";
    cout << endl;
    for (int i = 0; i < names.size(); i++) {
        cout << setw(20) << names[i]
             << setw(20) << votes[i]
             << setw(20) << fixed << setprecision(4) << (votes[i] * 100 / total)
             << "\n";
    }
    return 0;
}