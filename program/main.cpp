import core;
import message;

int main() {
    auto messages = core::Messages{};

    auto message = message::getMessage();
    messages.printLine(message);

    return 0;
}