#ifndef HONGLIAN_H
#define HONGLIAN_H
#include "Role.h"

class HongLian : public Role
{
    Q_OBJECT
public:
    HongLian();
    void normal();
    void attackOrMagic();
    void askForSkill(QString skill);
    void additionalAction();
    void cardAnalyse();
    void turnBegin();
    void XingHongShengYue();
    void ShaLuShengYan();
    void XueXingDaoYan1();
    void XueXingDaoYan2();
    void JieJiaoJieZao();
public slots:
    void onOkClicked();
    void onCancelClicked();
    void XingHongShiZi();
private:
    int dst[2];
    int cross[2];
    bool JieJiaoJieZaoUsed;
};

#endif // HONGLIAN_H
