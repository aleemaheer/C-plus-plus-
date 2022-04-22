#include <iostream>
#include <list>

using namespace std;

void data(string name, string owner_name, int subscribers_count);
void print_data(string name, string owner_name, int subscribers_count);

class YouTubeChannel {
    public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main() {
    YouTubeChannel ytchannel;
    ytchannel.Name = "Traversy media";
    ytchannel.OwnerName = "Brad Traversy";
    ytchannel.SubscribersCount = 1000000;
    ytchannel.PublishedVideoTitles = {"HTML Crash Course", "CSS Crash Course", "Javascript Crash Course"};
    // Printing All the data
    cout << "Name: " << ytchannel.Name << endl;
    cout << "Owner Name: " << ytchannel.OwnerName << endl;
    cout << "Subscribers: " << ytchannel.SubscribersCount << endl;
    for (string videoTitle: ytchannel.PublishedVideoTitles) {
        cout << "Videos Titles: " << videoTitle << endl;
    }

    // Calling other function
    string n, o_n;
    int s_c;
    cout << "Enter your youtube channel Name: ";
    cin >> n;
    cout << "Enter your name: ";
    cin >> o_n;
    cout << "Enter your subscribers: ";
    cin >> s_c;
    data(n, o_n, s_c);
}

void data(string name, string owner_name, int subscribers_count) {
    YouTubeChannel newChannel;
    newChannel.Name = name;
    newChannel.OwnerName = owner_name;
    newChannel.SubscribersCount = subscribers_count;
    print_data(newChannel.Name, newChannel.OwnerName, newChannel.SubscribersCount);
}

void print_data(string name, string owner_name, int subscribers_count) {
    cout << "Channel Name: " << name << endl;
    cout << "Owner Name: " << owner_name << endl;
    cout << "Subscribters: " << subscribers_count;
}