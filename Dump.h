#include "IWorker.h"

class Dump : public IWorker{
private:
    ofstream file;

    void parse_args() override;
public:
    explicit Dump(const string& arguments);

    void do_work(vector<string> txt) override;

    vector<string> get_result() override;
};