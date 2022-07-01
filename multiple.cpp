#include <iostream>

using namespace std;

class Radio
{
protected:	int num_of_songs;
public: Radio(int no):num_of_songs(no){}
		void play_songs() { cout << "Radio plays old songs! " << num_of_songs<<endl; }
};
class Camera
{
public: void clickphotograph() { cout << "clicks photographs!" << endl; }
};
class MusicPlayer
{
protected:	int num_of_songs;
public: MusicPlayer(int no) :num_of_songs(no) {}
		void play_songs() { cout << "MusicPlayer plays your playlist! " << num_of_songs<<endl; }
};
//multiple inheritance
class Cellphone :public Radio,public Camera,public MusicPlayer
{
public: Cellphone():MusicPlayer(1000),Radio(1)
		{
		}
		int return_no_of_songs()
		{
			return MusicPlayer::num_of_songs; //use scope resolution operator to resolve ambiguity!
		}
};

int main()
{
	Cellphone samsung;
	samsung.clickphotograph();
	samsung.Radio::play_songs();
	samsung.MusicPlayer::play_songs();
	//samsung.play_songs();//amibiguity
	cout << samsung.return_no_of_songs() << endl;
	return 0;
}