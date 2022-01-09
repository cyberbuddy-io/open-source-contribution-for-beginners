package com.example.weather_app_ui;

import java.util.ArrayList;

public class DummyData {
    private final ArrayList<DayModel> dayWeatherList;
    private final ArrayList<WeekModel> weekWeatherList;
    private final ArrayList<CityModel> cityWeatherList;

    public DummyData(){
        dayWeatherList = new ArrayList<>();
        weekWeatherList = new ArrayList<>();
        cityWeatherList = new ArrayList<>();
    }

    public ArrayList<DayModel> getDayWeatherList() {
        return dayWeatherList;
    }

    public ArrayList<WeekModel> getWeekWeatherList() {
        return weekWeatherList;
    }

    public ArrayList<CityModel> getCityWeatherList() {
        return cityWeatherList;
    }

    public void setCityWeatherList() {
        CityModel cm1 = new CityModel.CityBuilder().setTemp("25").setCity("Anand").setContry("India")
                .setIcon(R.drawable.pc_outlined).setRain("25%").setWind("15 km/h").build();

        CityModel cm2 = new CityModel.CityBuilder().setTemp("18").setCity("Delhi").setContry("India")
                .setIcon(R.drawable.clouds_outlined).setRain("35%").setWind("10 km/h").build();

        CityModel cm3 = new CityModel.CityBuilder().setTemp("32").setCity("Mumbai").setContry("India")
                .setIcon(R.drawable.sunny_outlined).setRain("5%").setWind("7 km/h").build();

        CityModel cm4 = new CityModel.CityBuilder().setTemp("8").setCity("Jammu").setContry("India")
                .setIcon(R.drawable.snow_outlined).setRain("55%").setWind("22 km/h").build();

        CityModel cm5 = new CityModel.CityBuilder().setTemp("17").setCity("Benglore").setContry("India")
                .setIcon(R.drawable.raining_outlined).setRain("85%").setWind("11 km/h").build();

        CityModel cm6 = new CityModel.CityBuilder().setTemp("42").setCity("Jaipur").setContry("India")
                .setIcon(R.drawable.sunny_outlined).setRain("2%").setWind("2 km/h").build();

        cityWeatherList.add(cm1);
        cityWeatherList.add(cm2);
        cityWeatherList.add(cm3);
        cityWeatherList.add(cm4);
        cityWeatherList.add(cm5);
        cityWeatherList.add(cm6);
    }

    public void setWeekWeatherList(){
        WeekModel wm1 = new WeekModel.WeekBuilder().setName("Monday").setDayTemp("23").setNightTemp("12").setImg(R.drawable.pc).build();
        WeekModel wm2 = new WeekModel.WeekBuilder().setName("Tuesday").setDayTemp("32").setNightTemp("18").setImg(R.drawable.sunny).build();
        WeekModel wm3 = new WeekModel.WeekBuilder().setName("Wednesday").setDayTemp("28").setNightTemp("14").setImg(R.drawable.cloudy).build();
        WeekModel wm4 = new WeekModel.WeekBuilder().setName("Thursday").setDayTemp("35").setNightTemp("21").setImg(R.drawable.sunny).build();
        WeekModel wm5 = new WeekModel.WeekBuilder().setName("Friday").setDayTemp("15").setNightTemp("6").setImg(R.drawable.raining).build();
        WeekModel wm6 = new WeekModel.WeekBuilder().setName("Saturday").setDayTemp("12").setNightTemp("2").setImg(R.drawable.snow).build();

        weekWeatherList.add(wm1);
        weekWeatherList.add(wm2);
        weekWeatherList.add(wm3);
        weekWeatherList.add(wm4);
        weekWeatherList.add(wm5);
        weekWeatherList.add(wm6);
    }

    public void setDayWeatherList() {
        DayModel dm1 = new DayModel.DayBuilder().setTime("10 AM").setImg(R.drawable.sunny).setTemp("32").build();
        DayModel dm2 = new DayModel.DayBuilder().setTime("12 PM").setImg(R.drawable.pc).setTemp("24").build();
        DayModel dm3 = new DayModel.DayBuilder().setTime("02 PM").setImg(R.drawable.cloudy).setTemp("18").build();
        DayModel dm4 = new DayModel.DayBuilder().setTime("04 PM").setImg(R.drawable.raining).setTemp("15").build();
        DayModel dm5 = new DayModel.DayBuilder().setTime("06 PM").setImg(R.drawable.lightning).setTemp("12").build();
        DayModel dm6 = new DayModel.DayBuilder().setTime("08 PM").setImg(R.drawable.cloudy).setTemp("14").build();
        DayModel dm7 = new DayModel.DayBuilder().setTime("10 PM").setImg(R.drawable.pc).setTemp("12").build();
        DayModel dm8 = new DayModel.DayBuilder().setTime("12 AM").setImg(R.drawable.snow).setTemp("5").build();

        dayWeatherList.add(dm1);
        dayWeatherList.add(dm2);
        dayWeatherList.add(dm3);
        dayWeatherList.add(dm4);
        dayWeatherList.add(dm5);
        dayWeatherList.add(dm6);
        dayWeatherList.add(dm7);
        dayWeatherList.add(dm8);
    }
}
