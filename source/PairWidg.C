#include <Wt/WContainerWidget>
#include <Wt/WHBoxLayout>
#include <Wt/WGoogleMap>
#include <Wt/WStackedWidget>

#include "PairWidg.h"
#include "ArtistWidg.h"


PairWidg::PairWidg(WContainerWidget *parent)
    : WContainerWidget(parent)
{
	container = new Wt::WContainerWidget();

	Wt::WHBoxLayout *hbox2 = new Wt::WHBoxLayout();
	container->setLayout(hbox2);

	Wt::WGoogleMap *map_ = new Wt::WGoogleMap(Wt::WGoogleMap::Version3);
	map_->setCenter(Wt::WGoogleMap::Coordinate(36.973120,-122.025868));
	map_->addIconMarker(Wt::WGoogleMap::Coordinate(36.973120,-122.025868), "icons/sopwidg_sel.png");
	map_->addIconMarker(Wt::WGoogleMap::Coordinate(36.974815,-122.026404), "icons/sopwidg_unsel.png");
	hbox2->addWidget(map_, 1);

	Wt::WContainerWidget *insert = new Wt::WContainerWidget();
	ArtistWidg *artist_widg = new ArtistWidg(insert, "Kevin", "Guitarist/Singer", "Kevin is a wonderful musician with a wide variety of material. He croons loudly, passionately, and fervorously. The time that you spend listening to Kevin will be so goooood.");
	Wt::WContainerWidget *insert2 = new Wt::WContainerWidget();
	ArtistWidg *artist_widg1 = new ArtistWidg(insert2, "Koovin", "Guitarist/Singer", "Kevin is a wonderful musician with a wide variety of material. He croons loudly, passionately, and fervorously. The time that you spend listening to Kevin will be so goooood.");

	Wt::WStackedWidget *stack = new Wt::WStackedWidget();
	stack->addWidget(insert);
	stack->addWidget(insert2);
	stack->setCurrentIndex(1);

	hbox2->addWidget(stack);
	//container->addWidget(artist_widg);

	parent->addWidget(container);
}