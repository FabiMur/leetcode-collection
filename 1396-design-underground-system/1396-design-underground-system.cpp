class UndergroundSystem {
private:
    unordered_map<string, long long> totalTravels;
    unordered_map<string, long long> totalTime;
    unordered_map<int, string> inStation;
    unordered_map<int, int> inTime;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        inStation[id] = stationName;
        inTime[id] = t;
    }
    
    void checkOut(int id, string stationName, int t) {
        totalTravels[inStation[id]+"->"+stationName]++;
        totalTime[inStation[id]+"->"+stationName] += t - inTime[id];
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double)totalTime[startStation+"->"+endStation]/totalTravels[startStation+"->"+endStation];
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */