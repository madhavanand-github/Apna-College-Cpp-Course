#include<bits/stdc++.h>
using namespace std;

// Typical Lengthy Version
struct interval {
	int start;
	int end;
};

bool compare(interval i1, interval i2){
	return (i1.start < i2.start);
}

vector<interval> mergeInterval(vector<interval> &intervals){

	if(intervals.size() == 0 || intervals.size() == 1) return intervals;

	sort(intervals.begin(), intervals.end(), compare);

	vector<interval> ans;
	int start = intervals[0].start;
	int end = intervals[0].end;

	for(int i = 1; i < intervals.size(); i++){
		int currStart = intervals[i].start;
		int currEnd = intervals[i].end;
		if(currStart <= end){
			end = max(currEnd, end);
		} else {
			ans.push_back({start, end});
			start = currStart;
			end = currEnd;
		}
	}
	ans.push_back({start, end});

	return ans;

}

// Short, Efficient & Leetcode Version
vector<vector<int>> mergeInterval(vector<vector<int>> intervals){
	
	if(intervals.size() <= 1) return intervals;

	sort(intervals.begin(), intervals.end());

	vector<vector<int>> ans;
	ans.push_back(intervals[0]);

	for(int i = 1; i < intervals.size(); i++)
		if(intervals[i][0] <= ans.back()[1]) ans.back()[1] = max(ans.back()[1], intervals[i][1]);
		else ans.push_back(intervals[i]);

	return ans;

}

int main() {
	
	// For typical solution
	vector<interval> intervals = { {1,4}, {7,9}, {2,5}};
	vector<interval> ans = mergeInterval(intervals);
	for(auto interval : ans)
		cout << interval.start << " " << interval.end << endl;

	// For efficient and leetcode solution
	vector<vector<int>> intervalss = { {1,4}, {7,9}, {2,5}};
	vector<vector<int>> anss = mergeInterval(intervalss);
	for(auto interval : anss)
		cout << interval[0] << " " << interval[1] << endl;
	

	
	return 0;
}