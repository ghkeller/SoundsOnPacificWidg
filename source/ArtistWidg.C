#include <Wt/WContainerWidget>
#include <Wt/WText>
#include <Wt/WLink>
#include <Wt/WImage>
#include <Wt/WHBoxLayout>
#include <Wt/WVBoxLayout>
#include <Wt/WFlashObject>
#include <Wt/WString>

#include "ArtistWidg.h"

ArtistWidg::ArtistWidg(WContainerWidget *parent, char* name, char* desc, char* bio)
    : WContainerWidget(parent), artist_name(name), artist_desc(desc), artist_bio(bio)
{
	container = new Wt::WContainerWidget();
	container->setStyleClass("yellow-box centered");
	container->resize(400, 400);

	Wt::WVBoxLayout *vbox1 = new Wt::WVBoxLayout();
	container->setLayout(vbox1);

	Wt::WHBoxLayout *hbox = new Wt::WHBoxLayout();
	vbox1->addLayout(hbox);

	image = new Wt::WImage(Wt::WLink("icons/hangman1.jpg"));
	image->resize(50, 50);
	hbox->addWidget(image);

	Wt::WVBoxLayout *vbox = new Wt::WVBoxLayout();
	hbox->addLayout(vbox, 1);

	Wt::WText *item = new Wt::WText(artist_name);
	item->setStyleClass("name-box");
	vbox->addWidget(item, 1);

	item = new Wt::WText(artist_desc);
	item->setStyleClass("desc-box");
	vbox->addWidget(item);

	item = new Wt::WText(artist_bio);
	item->setStyleClass("bio-box");
	vbox1->addWidget(item);

	Wt::WFlashObject *flash =
	    new Wt::WFlashObject("http://www.youtube.com/v/HOfdboHvshg");
	flash->setFlashParameter("allowFullScreen", "true");
	flash->resize(320, 180);
	vbox1->addWidget(flash, 1);

	parent->addWidget(container);
}

