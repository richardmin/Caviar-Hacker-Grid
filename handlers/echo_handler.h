#ifndef ECHO_HANDLER_H
#define ECHO_HANDLER_H

#include <string>
#include "../nginx-configparser/config_parser.h"
#include "../http/httpRequest.h"
#include "../http/httpResponse.h"
#include "request_handler.h"

class EchoHandler : public RequestHandler {
 public: 
  Status Init(const std::string& uri_prefix,
    const NginxConfig& config);
  
  Status HandleRequest(const Request& request,
             Response* response);
};

REGISTER_REQUEST_HANDLER(EchoHandler);


#endif
