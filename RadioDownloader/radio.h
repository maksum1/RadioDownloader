#ifndef RADIO_H
#define RADIO_H
#include <QMediaPlayer>

class Radio
{
public:
    Radio(QUrl RadioUrl);
    void start();
    void stop();
    void set_volume(int reng);
    ~Radio();
private:
QMediaPlayer* ptr_mediaPlayer;

};

#endif // RADIO_H
