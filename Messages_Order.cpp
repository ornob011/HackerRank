#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
public: 
    string text_;
    int id_=0;
    Message() {}
    Message(const string& text, int id=0)
    {
        text_=text;
        id_=id;
    }
    const string& get_text(){
        return text_;
        
    }
    bool operator<(const Message& o)
    {
        return id_ < o.id_;
    }
};

class MessageFactory {
public:
    int seq_=0;
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text, seq_++);     
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}