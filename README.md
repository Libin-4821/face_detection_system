# face_detection_system
A biometric face detection system that opens door only when a particular face is detected

Python is used to detect a particular face by using facedetection module. It uses single image to train its model and detects face. Adjust tolerance at a suitable level.

Arduino code is used to control a servo motor mimicing a door when a particular face is detected. 

When a face is detected, python code sends command to Arduino code to open the door and when no trained face is detected, it sends command to close the door. 

Arduino code and CV code should be run simultaneously.
