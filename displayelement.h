#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H

class DisplayElement
{
protected:
    DisplayElement() {}
    virtual ~DisplayElement() = 0;
public:
    virtual void display() const = 0;
};

#endif // DISPLAYELEMENT_H
