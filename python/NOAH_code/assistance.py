import pyttsx3 
import speech_recognition as sr 
import datetime
import wikipedia 
import webbrowser
import os
import smtplib, ssl
import pikachu as art

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        print("Good Morning!")
        speak("Good Morning!")

    elif hour>=12 and hour<14:
        print("Good Afternoon!")
        speak("Good Afternoon!")   

    elif hour>=14 and hour<20:
        print("Good Evening!")
        speak("Good Evening!")

    else:
        print("Good Night!")
        speak("Good Night!")
    print("I am your voice assistant. Please tell me how may I help you")
    speak("I am your voice assistant. Please tell me how may I help you") 

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    except Exception as e:    
        print("Say that again please...")
        return "None"

    return query

context = ssl.create_default_context()
def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('allaboutgames180@gmail.com', 'xyz@9058')
    server.sendmail('allaboutgames180@gmail.com', to, content)
    server.close()

if __name__ == "__main__":
    wishMe()
    while True:
    # if 1:
        query = takeCommand().lower()

        # Logic for executing tasks based on query
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'open youtube' in query:
            webbrowser.open("youtube.com")

        elif 'open google' in query:
            webbrowser.open("google.com")

        elif 'open stackoverflow' in query:
            webbrowser.open("stackoverflow.com")
        elif 'open blackboard' in query:
            webbrowser.open("https://cuchd.blackboard.com/")

        elif 'draw' in query:
            speak("I can draw something for you wait!")
            art.drawart()

        elif 'play music' in query:
            music_dir = 'C:\\Users\\Anurag\\Desktop\\New folder\\music'
            songs = os.listdir(music_dir)
            print(songs)
            os.startfile(os.path.join(music_dir, songs[0]))

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, the time is {strTime}")

        elif 'open code' in query:
            codePath = "C:\\Users\\Anurag\\AppData\\Local\\Programs\\Microsoft VS Code"
            os.startfile(codePath)
        elif 'play video' in query:
            videopath = "C:\\Users\\Anurag\\Desktop\\New folder\\video"
            video = os.listdir(videopath)
            print(video)
            os.startfile(os.path.join(videopath,video[0]))

        elif 'open airtel' in query:
            webbrowser.open("airtelxstream.in")
        elif'open facebook' in query:
            webbrowser.open("www.facebook.com")
        elif 'Open time table' in query:
            webbrowser.open("https://uims.cuchd.in/uims/")
        elif 'open hotstar' in query:
            webbrowser.open("https://www.hotstar.com/in")


        elif 'email' in query:
            try:
                speak("What should I say?")
                content = takeCommand()
                to = "anuragyadavmnp@gmail.com"
                sendEmail(to, content)
                speak("Email has been sent!")
                print("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry sir. I am not able to send this email. Kindly retry after some time")
        
        elif 'exit' in query:
            speak("Thanks Sir! Hope you had a very good experience!")
            print("***********GOODBYE**************")
            quit()