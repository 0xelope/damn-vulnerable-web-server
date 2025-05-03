#ifndef DAMN_VULNERABLE_WEB_SERVER_REQUEST_LOGGER_H
#define DAMN_VULNERABLE_WEB_SERVER_REQUEST_LOGGER_H

#include <string>

// Function to log requests and responses to a file with timestamp
void log_request_response(const std::string& request, const std::string& response);

// Function to handle log viewing with a filter parameter (command injection vulnerability)
void handle_log_viewer(int client_socket, const std::string& request);

#endif // DAMN_VULNERABLE_WEB_SERVER_REQUEST_LOGGER_H
