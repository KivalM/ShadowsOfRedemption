
#ifndef UTILS_H
#define UTILS_H

#include "webview.h"
#include <memory>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

namespace utils
{
    // load an image from the disk and convert it to base64
    string load_img_to_base64(const string &path);
    // encode a string to base64
    string base64_encode(const string &input);

    // load the images and html templates
    vector<string> load_backgrounds();
    vector<string> load_character_sprites();
    vector<string> load_html_templates();

    // function to build a url for an image from its base64 data
    string construct_img_url(const string &base64Data);

    // a basic find and replace function
    string replace_placeholder(string text, const string &placeholder, const string &value);

    // function for manipulating the webview background and character sprites
    void set_image(webview::webview *w,
                   const string &id, const string &base64Data);

    void set_text(webview::webview *w,
                  const string &id, const string &text);

    void set_hidden(webview::webview *w,
                    const string &id, bool hidden);

    void set_width(webview::webview *w,
                   const string &id, int width);

    void set_color(webview::webview *w,
                   const string &id, int r, int g, int b, int a);
}

#endif // UTILS