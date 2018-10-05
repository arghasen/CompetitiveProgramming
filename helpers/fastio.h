#include <iostream>
class fastio {
public:
    fastio() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
} __fastio;