#include <iostream>
#include <cstdlib>

int main()
{
    // CGIのレスポンスヘッダ
    std::cout << "Content-Type: text/html\n\n";

    // HTMLの出力
    std::cout << "<html><head><title>CGI Response</title></head>\n";
    std::cout << "<body>\n";
    std::cout << "<h1>CGI Program Executed</h1>\n";
    std::cout << "<p>You have clicked the button.</p>\n";
    std::cout << "</body></html>\n";

    return 0;
}
