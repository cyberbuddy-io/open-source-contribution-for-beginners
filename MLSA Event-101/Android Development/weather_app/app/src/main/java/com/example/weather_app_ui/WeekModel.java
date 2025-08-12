package com.example.weather_app_ui;

public class WeekModel {

    private final String name;
    private final String dayTemp;
    private final String nightTemp;
    private final int img;

    public WeekModel(WeekBuilder wb){
        name = wb.name;
        dayTemp = wb.dayTemp;
        nightTemp = wb.nightTemp;
        img = wb.img;
    }

    public String getName() {
        return name;
    }

    public String getDayTemp() {
        return dayTemp;
    }

    public String getNightTemp() {
        return nightTemp;
    }

    public int getImg() {
        return img;
    }

    public static class WeekBuilder {
        private String name,dayTemp,nightTemp;
        private int img;

        public WeekBuilder setName(String name) {
            this.name = name;
            return this;
        }

        public WeekBuilder setDayTemp(String dayTemp) {
            this.dayTemp = dayTemp;
            return this;
        }

        public WeekBuilder setImg(int img) {
            this.img = img;
            return this;
        }

        public WeekBuilder setNightTemp(String nightTemp) {
            this.nightTemp = nightTemp;
            return this;
        }

        public WeekModel build(){
            return new WeekModel(this);
        }
    }
}
