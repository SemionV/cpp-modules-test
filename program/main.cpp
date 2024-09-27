import core;
import message;
import std;

int main() {
    auto messages = core::Messages{};

    std::string message = message::getMessage();
    messages.printLine(message);

    return 0;
}