
String sendText = "<!DOCTYPE html>\n\n"
                  "<html lang=\"en\">\n\n"
                  "<head>\n\n"
                  "<meta charset=\"UTF-8\">\n\n"
                  "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n\n"
                  "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n\n"
                  "<title>\n\nMotor | Controller\n</title>\n\n"
                  "<style>\n"
                  "*{\n"
                  "box-sizing: border-box;\n"
                  "padding:0px;\n"
                  "margin:0px;\n"
                  "    }\n"
                  "    body{\n"
                  "font-family: Verdana, Geneva, Tahoma, sans-serif;\n"
                  " }\n"
                  ".main-container{\n"
                  "min-height: 100vh;\n"
                  "width:100%;\n"
                  "padding: 30px 15px 15px 15px;\n"
                  "background-color: rgb(36, 105, 215);\n"
                  "color:rgb(245, 241, 241);\n"
                  "position: relative;\n"
                  "}\n"
                  ".main-header{\n"
                  "text-align: center;\n"
                  "margin:auto;\n"
                  "}\n"
                  ".header-content{\n"
                  "background-color: black;\n"
                  "padding:10px 20px;\n"
                  "border-radius: 5px;\n"
                  "box-shadow: 0px 1px 5px rgba(52, 51, 51, 0.7);\n"
                  "color:rgb(218, 208, 208);\n"
                  "}\n"
                  ".control-container{\n"
                  "user-select: none;\n"
                  "height:300px;\n"
                  "width:300px;\n"
                  "border-radius: 50%;\n"
                  "display:flex;\n"
                  "justify-content: center;\n"
                  "align-items: center;\n"
                  "position:absolute;\n"
                  "top:50%;\n"
                  "left: 50%;\n"
                  "transform: translate(-50%, -50%);\n"
                  "}\n"
                  ".control-box{\n"
                  "height:inherit;\n"
                  "width:inherit;\n"
                  "position:relative;\n"
                  "}\n"
                  "#up-btn{\n"
                  "position:absolute;\n"
                  "top: -80px;\n"
                  "height:55px;\n"
                  "width:70px;\n"
                  "left:50%;\n"
                  "display:flex;\n"
                  "background-color: rgb(21, 115, 197);\n"
                  "justify-content: center;\n"
                  "align-items: center;\n"
                  "transform: translateX(-50%);\n"
                  "border: 1px solid #ece5e5;\n"
                  "color: #e6dfdf;\n"
                  "padding:5px;\n"
                  "border-radius: 50% 50% 5px 5px;\n"
                  "font-size:13px;\n"
                  "font-weight:700;\n"
                  "transition: 0.3s;\n"
                  "cursor: pointer;\n"
                  "outline:none;\n"
                  "}\n"
                  "#reverse-btn{\n"
                  "position:absolute;\n"
                  "bottom: -80px;\n"
                  "height:55px;\n"
                  "width:70px;\n"
                  "left:50%;\n"
                  "display:flex;\n"
                  "background-color: rgb(21, 115, 197);\n"
                  "justify-content: center;\n"
                  "align-items: center;\n"
                  "transform: translateX(-50%);\n"
                  "border: 1px solid #ece5e5;\n"
                  "color: #e6dfdf;\n"
                  "padding:5px;\n"
                  "border-radius: 5px 5px 50% 50% ;\n"
                  "font-size:13px;\n"
                  "font-weight:700;\n"
                  "transition: 0.3s;\n"
                  "cursor: pointer;\n"
                  "outline:none;\n"
                  "}\n"
                  "#right-btn{\n"
                  "position:absolute;\n"
                  "top:calc(50% - 30px);\n"
                  "right:-85px;\n"
                  "transform: rotate(90deg);\n"
                  "height:55px;\n"
                  "width:70px;\n"
                  "display:flex;\n"
                  "background-color: rgb(21, 115, 197);\n"
                  "justify-content: center;\n"
                  "align-items: center;\n"
                  "border: 1px solid #ece5e5;\n"
                  "color: #e6dfdf;\n"
                  "padding:5px;\n"
                  "border-radius: 50% 50% 5px 5px ;\n"
                  "font-size:13px;\n"
                  "font-weight:700;\n"
                  "transition: 0.3s;\n"
                  "cursor: pointer;\n"
                  "outline:none;\n"
                  "}\n"
                  "#left-btn{\n"
                  "position:absolute;\n"
                  "top:calc(50% - 30px);\n"
                  "left:-85px;\n"
                  "transform: rotate(-90deg);\n"
                  "height:55px;\n"
                  "width:70px;\n"
                  "display:flex;\n"
                  "background-color: rgb(21, 115, 197);\n"
                  "justify-content: center;\n"
                  "align-items: center;\n"
                  "border: 1px solid #ece5e5;\n"
                  "color: #e6dfdf;\n"
                  "padding:5px;\n"
                  "border-radius: 50% 50% 5px 5px ;\n"
                  "font-size:13px;\n"
                  "font-weight:700;\n"
                  "transition: 0.3s;\n"
                  "cursor: pointer;\n"
                  "outline:none;\n"
                  "}\n"
                  "#stop-btn{\n"
                  "top:50% ;\n"
                  "right:50%;\n"
                  "height:100%;\n"
                  "width:100%;\n"
                  "display:flex;\n"
                  "background-color: rgb(21, 115, 197);\n"
                  "justify-content: center;\n"
                  "align-items: center;\n"
                  "border: 1px solid #ece5e5;\n"
                  "color: #e6dfdf;\n"
                  "padding:5px;\n"
                  "border-radius: 50%  ;\n"
                  "font-size:13px"
                  "font - weight: 700; "
                  "transition: 0.3s; "
                  "cursor: pointer; "
                  "outline: none; "
                  "}\n"
                  "footer{\n"
                  "position:fixed;\n"
                  "bottom: 0px;\n"
                  "left: 0px;\n"
                  "width:100vw;\n"
                  "background-color:#000;\n"
                  "padding: 10px;\n"
                  "text-align: center;\n"
                  "color: #fff;\n"
                  "}\n"
                  "#stop-btn:hover, #up-btn:hover, #reverse-btn:hover, #right-btn:hover, #left-btn:hover{\n"
                  "background-color: rgb(7, 101, 183) ;\n"
                  "}\n"
                  "#stop-btn:active, #up-btn:active, #reverse-btn:active, #right-btn:active, #left-btn:active{\n"
                  "outline: none;\n"
                  "}\n"
                  "@media screen and (max-width: 470px) {\n"
                  ".control-container{\n"
                  "height: 150px;\n "
                  "width: 150px;\n "
                  "}\n"
                  "#up-btn{\n"
                  "top: -65px;\n"
                  "}\n"
                  "#reverse-btn{\n" 
                  "bottom: -65px;\n"
                  "}\n"
                  "#right-btn{\n"
                  "right: -75px;\n"
                  "}\n"
                  "#left-btn{\n"
                  "left: -75px;\n"
                  "}\n"
                  "}\n"
                  " </style >\n "
                  " </head >\n "
                  "<body>\n"
                  " <main class = \"main-container\">\n"
                  "<h3 class=\"main-header\">\n"
                  "<span class=\"header-content\">\n motor controller \n</span>\n"
                  "\n</h3>\n"
                  "<div class=\"control-container\">\n"
                  "<div class=\"control-box\">\n"
                  "<div id=\"up-btn\">\n"
                  "forward"
                  "\n</div>\n"
                  "<div id=\"reverse-btn\">\n"
                  "reverse"
                  "\n</div>\n"
                  "<div id=\"right-btn\">\n"
                  "right"
                  "\n</div>\n"
                  "<div id=\"left-btn\">\n"
                  "left"
                  "\n</div>\n"
                  "<div id=\"stop-btn\">\n"
                  "stop"
                  "\n</div>\n"
                  "\n</div>\n"
                  "\n</div>\n"
                  "<footer> copyright &copy; <span id=\"date\"></span> kirio</footer>"
                  "\n</main>\n"
                  "<script>\n"
                  "const date = new Date()\n"
                  "const year = date.getFullYear()\n"
                  "document.getElementById(\"date\").innerHTML = year;\n"
                  "const front = document.getElementById(\"up-btn\");\n"
                  "const reverse = document.getElementById(\"reverse-btn\");\n"
                  "const right = document.getElementById(\"right-btn\");\n"
                  "const left = document.getElementById(\"left-btn\");\n"
                  "const stopBtn = document.getElementById(\"stop-btn\");\n"
                  "const intervalDelay = 50;\n"
                  "// set event for forward movement of the motor\n\n"
                  "front.addEventListener(\"mousedown\", frontMotion);\n"
                  "front.addEventListener(\"mouseup\", stopFrontMotion);\n"
                  //events forward movements on touch screen device
                  "front.addEventListener(\"touchstart\", frontMotion);\n"
                  "front.addEventListener(\"touchend\", stopFrontMotion);\n"
                  
                  "// set event for for reverse movement of the motor\n\n"
                  "reverse.addEventListener(\"mousedown\", reverseMotion);\n"
                  "reverse.addEventListener(\"mouseup\", stopReverseMotion);\n"
                  //event reverse for touch screen device 
                  "reverse.addEventListener(\"touchstart\", reverseMotion);\n"
                  "reverse.addEventListener(\"touchend\", stopReverseMotion);\n"
                  
                  "// set event for right movement of the motor\n\n"
                  "right.addEventListener(\"mousedown\", rightMotion);\n"
                  "right.addEventListener(\"mouseup\", stopRightMotion);\n"
                  // set event for right motion on touch screen device
                  "right.addEventListener(\"touchstart\", rightMotion);\n"
                  "right.addEventListener(\"touchend\", stopRightMotion);\n"
                  
                  "// set event for left movement of the motor\n\n"
                  "left.addEventListener(\"mousedown\", leftMotion);\n"
                  "left.addEventListener(\"mouseup\", stopLeftMotion);\n\n"
                  // set event for left motion on touch screen device
                  "left.addEventListener(\"touchstart\", leftMotion);\n"
                  "left.addEventListener(\"touchend\", stopLeftMotion);\n\n"
                  
                  "// set event for forward movement of the motor\n\n"
                  "stopBtn.addEventListener(\"mousedown\", stopMotion);\n"
                  "stopBtn.addEventListener(\"touchstart\", stopMotion);\n"
                  "// front movement actions of motor...\n"
                  "function frontMotion(){\n"
                  "console.log(\"front motion\");\n"
                  "const xhr = new XMLHttpRequest();\n"
                  "xhr.open(\"GET\", \"/front\", true)\n"
                  "xhr.send();\n"
                  "}\n"
                  "function stopFrontMotion(){\n"
                  "console.log(\"halt front motion\")\n;"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\",\"/halt\", true)\n"
                  "xhr.send();\n"
                  "}\n\n"
                  "// reverse movement actions of motor\n"
                  "function reverseMotion(){\n"
                  "console.log(\"reverse motion\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/reverse\", true)\n"
                  "xhr.send();"
                  "}\n"
                  "function stopReverseMotion(){\n"
                  "console.log(\"halt reverse motion\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/halt\", true)\n"
                  "xhr.send();"
                  "}\n\n"
                  "// right movement actions of motor\n"
                  "function rightMotion(){\n"
                  "console.log(\"right motion\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/right\", true)\n"
                  "xhr.send();"
                  "}\n"
                  "function stopRightMotion(){\n"
                  //"clearInterval(rightAction);\n"
                  "console.log(\"halt right motion\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/halt\", true)\n"
                  "xhr.send();"
                  "}\n\n"
                  "// left movement actions of motor\n"
                  "function leftMotion(){\n"
                  "console.log(\"left motion\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/left\", true)\n"
                  "xhr.send();"
                  "}\n"
                  "function stopLeftMotion(){\n"
                  "console.log(\"halt left motion\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/halt\", true)\n"
                  "xhr.send();"
                  "}\n\n"
                  "// stop movement actions of motor\n"
                  "function stopMotion(){\n"
                  "console.log(\"stop movements\");\n"
                  "const xhr = new XMLHttpRequest();"
                  "xhr.open(\"GET\", \"/stop\", true)\n"
                  "xhr.send();"
                  "}\n"
                  "\n</script>\n"
                  "\n</body>\n"
                  "\n</html>\n";

                  
// add libraries to sketch.
#include <ESP8266WiFi.h>\n
#include<ESP8266WebServer.h>\n
// setting our ip adress for local,subnet and geteway:
IPAddress local_ip(192, 168, 10, 10);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);
// instantiating an esp8266webserver object with the value of 80:
ESP8266WebServer server(80);

// setting our wifi name and password:
#define ssid "Motor Controller"
#define passcode "123456789"
/*
    declaring pin-out on nodemcu for the ultrasonic sensor and the pump and the pump_pin status:
*/
const int d0 = 16;
const int d1 = 5;
const int d2 = 4;
const int d3 = 0;
const int d4 = 2;
const int d5 = 14;
const int d6 = 12;
const int d7 = 13;
const int d8 = 15;
const int sd2 = 9;
const int sd3 = 10;

const int in1 = d1;
const int in2 = d2;
const int in3 = d3;
const int in4 = d4;


void setup() { // put your code here to run once:
  Serial.begin(115200);
  WiFi.softAP(ssid, passcode);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  Serial.println("web server started");
//  Serial.println(sendText);
  //show landing page(controller page)...
  server.on("/", onConnect);

  // action call for front motion of the motor
  server.on("/front", frontMotion);
  
  // action call for reverse of the motor
  server.on("/reverse", reverseMotion);

  // action call for right turn of th motor
  server.on("/right", rightMotion);

  // action call for left turn of the motor
  server.on("/left", leftMotion);

  // action call to stop motor motion
  server.on("/halt", haltMotion);

  // action call to halt all movement of the motor
  server.on("/stop", stopMotion);
  
  // handle not found
  server.onNotFound(handle_notfound);

  // start listening to request 
  server.begin();
}

// show lading page (handle on connect)...
void onConnect() {
  server.send(200, "text/html", sendText);
  Serial.println("home page rendered");
}

// front motion
void frontMotion(){
  Serial.println("going forward");
  digitalWrite(in1, HIGH); // right wheel forward motion
  digitalWrite(in2, LOW); // right whell reverse motion
  digitalWrite(in3, HIGH); // left wheel forward motion
  digitalWrite(in4, LOW); // left wheel reverse motion
  server.send(200, "text/plain", "going forward");
}

// reverse motion 
void reverseMotion(){
  digitalWrite(in1, LOW); // right wheel forward motion
  digitalWrite(in2, HIGH); // right whell reverse motion
  digitalWrite(in3, LOW); // left wheel forward motion
  digitalWrite(in4, HIGH); // left wheel reverse motion
  Serial.println("reverse motion");
  server.send(200, "text/plain", "reverse motion");
}

// right miotion
void rightMotion(){
  Serial.println("right motion");
  digitalWrite(in1, HIGH); // right wheel forward motion
  digitalWrite(in3, LOW); // right whell reverse motion
  digitalWrite(in2, LOW); // left wheel forward motion
  digitalWrite(in4, HIGH); // left wheel reverse motion
  server.send(200, "text/plain", "forward motion");
}

// left motion
void leftMotion(){
  Serial.println("left motion");
  digitalWrite(in1, LOW); // right wheel forward motion
  digitalWrite(in3, HIGH); // right whell reverse motion
  digitalWrite(in2, HIGH); // left wheel forward motion
  digitalWrite(in4, LOW); // left wheel reverse motion
  server.send(200, "text/plain", "left motion");
}

// halt motion
void haltMotion(){
  digitalWrite(in1, LOW); // right wheel forward motion
  digitalWrite(in3, LOW); // right whell reverse motion
  digitalWrite(in2, LOW); // left wheel forward motion
  digitalWrite(in4, LOW); // left wheel reverse motion
  Serial.println("halt motion");
  server.send(200, "text/plain", "halt motion");
}

// stop motion
void stopMotion(){
  Serial.println("stop motion");
  digitalWrite(in1, LOW); // right wheel forward motion
  digitalWrite(in3, LOW); // right whell reverse motion
  digitalWrite(in2, LOW); // left wheel forward motion
  digitalWrite(in4, LOW); // left wheel reverse motion
  server.send(200, "text/plain", "stop motion");
}


// not found page.
void handle_notfound() {
  Serial.println("invalid request: ");
  server.send(404, "text/html", "<h1 style=\"color:red; text-align:center; \">\nweb page not available\n</h1>\n");
  Serial.println("not found");
}
void loop() { // put your code here to run repeatedly:
  server.handleClient();
}
