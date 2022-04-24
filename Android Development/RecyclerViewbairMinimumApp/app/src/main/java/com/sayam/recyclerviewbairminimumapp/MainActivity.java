package com.sayam.recyclerviewbairminimumapp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;

import com.sayam.recyclerviewbairminimumapp.Adapter.MyAdapter;
import com.sayam.recyclerviewbairminimumapp.Model.DataModel;

public class MainActivity extends AppCompatActivity {
    public RecyclerView  recyclerView;
    DataModel[] dataModels;
    MyAdapter adapter;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        recyclerView = findViewById(R.id.recyclerView);
        dataModels = new DataModel[]{
                new DataModel("Learn Android Development",R.drawable.android_ogo),
                new DataModel("Learn Android Development",R.drawable.androud),
                new DataModel("Learn Flutter Development",R.drawable.flutter),
                new DataModel("Learn Android Development",R.drawable.androud),
                new DataModel("Learn Flutter Development",R.drawable.flutter),
                new DataModel("Learn Android Development ",R.drawable.androud),
                new DataModel("Learn Flutter Development",R.drawable.flutter),
                new DataModel("Learn Android Development ",R.drawable.androud)

        };

        // adapter
        adapter = new MyAdapter(dataModels);
        recyclerView.setHasFixedSize(true);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));
        recyclerView.setAdapter(adapter);

    }
}