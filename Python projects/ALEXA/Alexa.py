import speech_recognition as speech


listener = speech.Recognizer()

try:
    with speech.Microphone() as mic:
        print("say something")
        voice = listener.listen(mic)
        text = listener.recognize_google(voice)
        print(text)
except:
    pass
