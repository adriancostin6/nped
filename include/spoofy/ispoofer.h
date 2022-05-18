#ifndef _ISPOOFER_H_
#define _ISPOOFER_H_

#include <vector>

class ISpoofer {
public:
    virtual ~ISpoofer() {}
    virtual void spoof() = 0;
};

class SpoofingContext {
public:
    SpoofingContext(ISpoofer *spoofer);
    ~SpoofingContext();

    void do_spoofing();

    void set_spoofer(ISpoofer *spoofer);
    void set_delays(const std::vector<int> &d);
private:
    ISpoofer *spoofer_;
    const std::vector<int> &delays;
};

#endif // _ISPOOFER_H_
