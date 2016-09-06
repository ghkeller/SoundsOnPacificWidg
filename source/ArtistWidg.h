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
  ArtistWidg(Wt::WContainerWidget *parent = 0,
  	char* name = "",
  	char* desc = "",
  	char* bio = "");
  

private:
  Wt::WContainerWidget *container;
  Wt::WImage *image;
  char *artist_name;
  char *artist_desc;
  char *artist_bio;
};

#endif //ARTISTWIDG_H_