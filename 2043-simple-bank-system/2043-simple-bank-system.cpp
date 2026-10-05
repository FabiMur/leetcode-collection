class Bank {
private: 
    vector<long long>& balance_;

    inline bool validAccount(int account){
        return account > 0 && account <= balance_.size();
    }
public:
    Bank(vector<long long>& balance): balance_(balance) {}
    
    bool transfer(int account1, int account2, long long money) {
        if(validAccount(account1) && validAccount(account2) && balance_[account1-1] >= money){
            balance_[account1-1] -= money;
            balance_[account2-1] += money;
            return true;
        }

        return false;
    }
    
    bool deposit(int account, long long money) {
        if(validAccount(account)){
            balance_[account-1] += money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
        if(validAccount(account) &&  balance_[account-1] >= money){
            balance_[account-1] -= money;
            return true;
        } 
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */