#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H

class DisplayElement
{
protected:
    DisplayElement() = default;
    virtual ~DisplayElement() = default;
public:
    virtual void display() const = 0;
};

#endif // DISPLAYELEMENT_H
