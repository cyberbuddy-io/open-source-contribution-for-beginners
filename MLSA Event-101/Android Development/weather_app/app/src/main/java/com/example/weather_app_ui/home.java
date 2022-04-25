package com.example.weather_app_ui;

import android.os.Bundle;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import java.util.List;
import java.util.Objects;

public class home extends Fragment {

    private final List<DayModel> dm;
    private final List<WeekModel> wm;

    public home() {
        DummyData data = new DummyData();
        data.setDayWeatherList();
        data.setWeekWeatherList();
        dm = data.getDayWeatherList();
        wm = data.getWeekWeatherList();
    }


    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.home, container, false);

        RecyclerView rv = (RecyclerView) view.findViewById(R.id.day);
        DayAdapter adapter = new DayAdapter(getContext(),dm);
        rv.setLayoutManager(new LinearLayoutManager(getContext(),LinearLayoutManager.HORIZONTAL,false));
        rv.setAdapter(adapter);

        RecyclerView rv1 = (RecyclerView) view.findViewById(R.id.week);
        WeekAdapter adapter1 = new WeekAdapter(getContext(),wm);
        rv1.setLayoutManager(new LinearLayoutManager(getContext(),LinearLayoutManager.VERTICAL,false));
        rv1.setAdapter(adapter1);

        return view;
    }
}