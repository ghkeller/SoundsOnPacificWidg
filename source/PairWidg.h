#ifndef PAIRWIDG_H_
#define PAIRWIDG_H_

#include <Wt/WContainerWidget>
#include <Wt/WHBoxLayout>

class PairWidg : public Wt::WContainerWidget
{
public:
  PairWidg(Wt::WContainerWidget *parent = 0);

private:
  Wt::WContainerWidget *container;
};

#endif //PAIRWIDG_H_