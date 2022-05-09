package com.example.weather_app_ui;

public class CityModel {
    String temp,city,contry,wind,rain;
    int icon;

    public String getTemp() {
        return temp;
    }

    public int getIcon() {
        return icon;
    }

    public String getCity() {
        return city;
    }

    public String getContry() {
        return contry;
    }

    public String getRain() {
        return rain;
    }

    public String getWind() {
        return wind;
    }
    
    public CityModel(CityBuilder cm){
        temp = cm.temp;
        city = cm.city;
        contry = cm.contry;
        wind = cm.wind;
        rain = cm.rain;
        icon = cm.icon;
    }
    
    public static class CityBuilder {
        String temp,city,contry,wind,rain;
        int icon;

        public CityBuilder setTemp(String temp) {
            this.temp = temp;
            return this;
        }

        public CityBuilder setCity(String city) {
            this.city = city;
            return this;
        }

        public CityBuilder setContry(String contry) {
            this.contry = contry;
            return this;
        }

        public CityBuilder setWind(String wind) {
            this.wind = wind;
            return this;
        }

        public CityBuilder setIcon(int icon) {
            this.icon = icon;
            return this;
        }

        public CityBuilder setRain(String rain) {
            this.rain = rain;
            return this;
        }

        public CityModel build(){
            return new CityModel(this);
        }
        
    }
}
