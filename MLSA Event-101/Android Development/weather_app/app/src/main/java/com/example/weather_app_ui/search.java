package com.example.weather_app_ui;

import android.os.Bundle;

import androidx.fragment.app.Fragment;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import java.util.ArrayList;
import java.util.List;

public class search extends Fragment {

    private List<CityModel> cm;

    public search() {
        cm = new ArrayList<>();
        DummyData data = new DummyData();
        data.setCityWeatherList();
        cm = data.getCityWeatherList();
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.search, container, false);

        RecyclerView rv = view.findViewById(R.id.cities);
        CityAdapter adapter = new CityAdapter(getContext(),cm);

        rv.setLayoutManager(new GridLayoutManager(getContext(),2));
        rv.setAdapter(adapter);

        return view;
    }
}