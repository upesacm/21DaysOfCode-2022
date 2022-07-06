#This is the code that fetches chances of rain of entered location in next 3 hours
#The program uses OpenWeatherMap API and I've taken out my API key for obvious reasons
import requests

lat = input("Enter the latitude of the desired location: ")
lon = input("Enter the logitude of the desired locaiton: ")
api_key = "XXXXXXXXXXXXXXXX"

def get_weather():
    url = f"https://api.openweathermap.org/data/2.5/onecall?lat={lat}&lon={lon}&exclude=current,minutely,daily,alerts&appid={api_key}"
    response = requests.get(url).json()
    rain_chances = response['hourly'][1]['pop']
    print(f"Probablity of precipitation: {rain_chances*100}%")
get_weather()