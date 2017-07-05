#include "radio.h"

Radio::Radio(QUrl RadioUrl)
{
 ptr_mediaPlayer=new QMediaPlayer();

 ptr_mediaPlayer->setMedia(RadioUrl);
}

void Radio::start()
{
    ptr_mediaPlayer->play();
}
void Radio::stop()
{
    ptr_mediaPlayer->stop();
}

void Radio::set_voice(int reng)
{


    ptr_mediaPlayer->setVolume(reng);

}

Radio::~Radio()
{

    delete  ptr_mediaPlayer;
}
