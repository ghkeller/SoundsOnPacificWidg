#ifndef ARTISTWIDG_H_
#define ARTISTWIDG_H_

#include <Wt/WContainerWidget>
#include <Wt/WText>
#include <Wt/WLink>
#include <Wt/WImage>
#include <Wt/WString>

class ArtistWidg : public Wt::WContainerWidget
{
public:
  ArtistWidg(Wt::WContainerWidget *parent = 0, char* name = "");
  

private:
  Wt::WContainerWidget *container;
  Wt::WImage *image;
  char *artist_name;
};

#endif //ARTISTWIDG_H_