//
// Created by User on 08.06.2018.
//

#ifndef TANKZ_ICONTROLS_HPP
#define TANKZ_ICONTROLS_HPP

class iControls
{
public:
    virtual ~iControls() {}

    virtual void mfwd() = 0;
    virtual void mback() = 0;
    virtual void mleft() = 0;
    virtual void mrght() = 0;
    virtual void shoot() = 0;
};

#endif //TANKZ_ICONTROLS_HPP
