#include <QSoundEffect>
#include <QObject>
#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

class SoundSystem : public QObject {
    Q_OBJECT

public:
    SoundSystem(QObject* parent);
    void play();
    void stop();
    int getSoundGameValue();
    void initSound();
    void playGameSound();
    void initPlayerSound();
    void updatePlayerSound(int newVolume);
    void stopPlayerSound();
private:
    QSoundEffect effect;
    int soundGameValue;
};


#endif // SOUNDSYSTEM_H