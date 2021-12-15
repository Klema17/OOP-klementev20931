#include "IWorker.h"

class WriteFile : public IWorker{ //don't work
private:
    vector<string> get_result() override;

    void parse_args() override;
public:
    ofstream file;
    explicit WriteFile(const string& arguments);

    void do_work(vector<string> txt) override;
};