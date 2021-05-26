#include <iostream>
using namespace std;

void Status(int code) {
    if (code >=100 && code < 200) {
        if (code == 100) {
            cout << "Status 100: Continue.";
        } 
        if (code == 101) {
            cout << "Status 101: Switching Protocols.";
        }
        if (code == 103) {
            cout << "Status 103: Early Headers availible.";
        }
    }

    if (code >=200 && code < 300) {
        if (code == 200) {
            cout << "Status 200: Everything OK.";
        } 
        if (code == 201) {
            cout << "Status 201: Created new resource.";
        }
        if (code == 202) {
            cout << "Status 202: Accepted.";
        }
        if (code == 203) {
            cout << "Status 203: Non-Authoritative Information.";
        }
        if (code == 204) {
            cout << "Status 204: No Content.";
        }
        if (code == 205) {
            cout << "Status 205: Resetting Content.";
        }
        if (code == 206) {
            cout << "Status 206: Partial Content.";
        }
    }

    if (code >=300 && code < 400) {
        if (code == 300) {
            cout << "Status 300: Multiple Potential Resources.";
        } 
        if (code == 301) {
            cout << "Status 301: Resource Perminately Moved.";
        }
        if (code == 302) {
            cout << "Status 302: Requested Resource has moved, but was found.";
        }
        if (code == 303) {
            cout << "Status 303: See Other.";
        }
        if (code == 307) {
            cout << "Status 307: Temporary Redirect.";
        }
        if (code == 308) {
            cout << "Status 308: Permanent Redirect.";
        }
    }

    if (code >=400 && code < 500) {
        if (code == 400) {
            cout << "Status 400: Bad Request.";
        } 
        if (code == 401) {
            cout << "Status 401: Unauthorized.";
        }
        if (code == 402) {
            cout << "Status 402: Payment Required.";
        }
        if (code == 403) {
            cout << "Status 403: Access to that resource is forbidden.";
        }
        if (code == 404) {
            cout << "Status 404: Requested Resource was not found.";
        }
        if (code == 405) {
            cout << "Status 405: Method not found.";
        }
        if (code == 406) {
            cout << "Status 406: Invalid Response.";
        }
        if (code == 407) {
            cout << "Status 407: Proxy Authentication Required.";
        }
        if (code == 408) {
            cout << "Status 408: Server Timeout.";
        }
        if (code == 409) {
            cout << "Status 409: Conflict.";
        }
        if (code == 410) {
            cout << "Status 410: The requested resource is gone and will not be coming back.";
        }
        if (code == 411) {
            cout << "Status 411: Length Required.";
        }
        if (code == 412) {
            cout << "Status 412: Precondition Failed.";
        }
        if (code == 413) {
            cout << "Status 413: Request Entity too large.";
        }
        if (code == 414) {
            cout << "Status 414: URL too long.";
        }
        if (code == 415) {
            cout << "Status 415: Unsupported Media Type.";
        }
        if (code == 416) {
            cout << "Status 416: Range Not Satisfiable.";
        }
        if (code == 417) {
            cout << "Status 417: Expectation Failed.";
        }
        if (code == 418) {
            cout << "Status 418: I'm a teapot.";
        }
        if (code == 422) {
            cout << "Status 422: Unprocessable Entity.";
        }
        if (code == 425) {
            cout << "Status 425: Too Early.";
        }
        if (code == 416) {
            cout << "Status 426: Upgrade Required.";
        }
        if (code == 428) {
            cout << "Status 428: Precondition Required.";
        }
        if (code == 429) {
            cout << "Status 429: Too Many Requests.";
        }
        if (code == 431) {
            cout << "Status 431: Request Header Fields Too Large.";
        }
        if (code == 451) {
            cout << "Status 451: Unavalible for Legal Reasons.";
        }
        if (code == 499) {
            cout << "Status 499: Client Closed Request.";
        }
    }
    
    if (code >= 500 && code < 600) {
        if (code == 500) {
            cout << "Status 500: There was an error on the Server and the request could not be completed.";
        }
        if (code == 501) {
            cout << "Status 501: Not Implemented";
        }
        if (code == 502) {
            cout << "Status 502: Bad Gateway.";
        }
        if (code == 503) {
            cout << "Status 503: The server is unable to handle this request right now.";
        }
        if (code == 504) {
            cout << "Status 504: The Server, acting as a Gateway, timed out waiting for another server to respond.";
        }
        if (code == 505) {
            cout << "Status 505: HTTP Version Not Supported.";
        }
        if (code == 508) {
            cout << "Status 508: Resource Limit is Reached.";
        }
        if (code == 511) {
            cout << "Status 511: Network Authentication Required.";
        }
        if (code == 521) {
            cout << "Status 521: Web Server is down.";
        }
        if (code == 525) {
            cout << "Status 525: SSL Handshake Failed.";
        }
    }
    if (code >= 600 && code < 700) {
        if (code == 600) {
            cout << "Status 600: Invalid Array Sizes.";
        }
    }
}