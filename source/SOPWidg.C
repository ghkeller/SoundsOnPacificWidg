#include <Wt/WApplication>
#include <Wt/WCssDecorationStyle>


#include "PairWidg.h"

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
  Wt::WApplication *app = new Wt::WApplication(env);
  app->setTitle("Sounds On Pacific");

  app->instance()->useStyleSheet("css1/CSSexample3.css");

  PairWidg *pw = new PairWidg(app->root());

  return app;
}


int main(int argc, char **argv)
{
  return Wt::WRun(argc, argv, &createApplication);
}