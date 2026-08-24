struct Node {
    vector<string> children;
    bool isAlive = true;
};
class ThroneInheritance {
private:
    string kingName;
    unordered_map<string,Node> tree;

    void dfs(const string &name, vector<string> &order) {
        if (tree[name].isAlive) {
            order.push_back(name);
        }
        for (const string &child: tree[name].children) {
            dfs(child, order);
        }
    }
public:
    ThroneInheritance(string kingName) {
        this->kingName = kingName;
    }
    
    void birth(string parentName, string childName) {
        tree[parentName].children.push_back(childName);
    }
    
    void death(string name) {
        tree[name].isAlive = false;
    }
    
    vector<string> getInheritanceOrder() {
        vector<string> order;
        dfs(this->kingName, order);
        return order;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna