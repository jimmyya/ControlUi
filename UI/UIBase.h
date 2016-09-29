#ifndef UIBASE_H
#define UIBASE_H

#include<vector>
#include<map>
using std::vector;
using std::map;

#include"EventBase.h"
#include"DetailDefine.h"
#include"UIContentBase.h"
class UIRankAction;

class UIBase
{
    typedef vector<UIContentBase*> VecContentItemType;
    typedef vector<VecContentItemType> VecContentPageType;

public:
    UIBase();
    virtual ~UIBase();
public:
    virtual void show() = 0;
    virtual bool initUI(PageType pageTypePara) = 0;
public:
    virtual void setRankAndContent(UIRankAction *rankActionPara,VecContentPageType &pageContentPara);
protected:
    VecContentPageType pageContent;
    UIRankAction *rankAction;
    int index;
};

#endif // UIBASE_H
