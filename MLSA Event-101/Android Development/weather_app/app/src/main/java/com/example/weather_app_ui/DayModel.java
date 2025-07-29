package com.example.weather_app_ui;

public class DayModel {
    private String time;
    private String temp;
    private int img;

    public DayModel(DayBuilder db){
        time = db.time;
        img = db.img;
        temp = db.temp;
    }

    public String getTime() {
        return time;
    }

    public int getImg() {
        return img;
    }

    public String getTemp() {
        return temp;
    }

    public static class DayBuilder {
        private String time;
        private String temp;
        private int img;

        public DayBuilder setTime(String time) {
            this.time = time;
            return this;
        }

        public DayBuilder setImg(int img) {
            this.img = img;
            return this;
        }

        public DayBuilder setTemp(String temp) {
            this.temp = temp;
            return this;
        }

        public DayModel build(){
            return new DayModel(this);
        }
    }
}
