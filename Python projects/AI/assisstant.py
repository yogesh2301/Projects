# print("chaliye shuru krte h")
import sp


listener = speech.Recognizer()

try:
    with speech.Microphone() as mic:
        print("say something")
        voice = listener.listen(mic)
        text = listener.recognize_google(voice)
        print(text)
except:
    pass
