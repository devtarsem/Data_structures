#include<crow.h>
#include<iostream>

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/hello")([](){
        return "Hello, from C++!";
    });

    app.port(8080).run();
}
