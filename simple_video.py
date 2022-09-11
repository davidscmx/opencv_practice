import cv2

video = cv2.VideoCapture(0)

while (True):

    # capture the video by frame
    ret, frame = video.read()
    cv2.imshow("webcam", frame)e

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

video.release()
cv2.destroyAllWindows()