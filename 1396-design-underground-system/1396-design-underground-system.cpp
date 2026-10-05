class UndergroundSystem {
private:
    unordered_map<string, pair<long long, int>> statistics;
    unordered_map<int, pair<string,int>> departures;

    string generateTravelId(const string station1, const string station2) const{
        return string(station1+ ", "+ station2);
    }


public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        departures[id] = pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        string travelId = generateTravelId(departures[id].first, stationName);
        statistics[travelId].first += t - departures[id].second;
        statistics[travelId].second++;
        departures.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string travelId = generateTravelId(startStation, endStation);
        return (double) statistics[travelId].first / statistics[travelId].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */