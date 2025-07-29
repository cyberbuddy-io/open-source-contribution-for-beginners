package com.example.weather_app_ui;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;

import android.annotation.SuppressLint;
import android.os.Bundle;

import com.google.android.material.bottomnavigation.BottomNavigationView;

import java.util.Objects;

public class MainActivity extends AppCompatActivity {

    BottomNavigationView bNV;
    Fragment f1, f2, f3 = null;

    @SuppressLint("NonConstantResourceId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Objects.requireNonNull(getSupportActionBar()).hide();

        f1  = new home();
        f2 = new search();
        f3 = new details();

        getSupportFragmentManager().beginTransaction().replace(R.id.container, new home()).commit();

        bNV = findViewById(R.id.bnv);
        bNV.setSelectedItemId(R.id.home);
        bNV.setOnItemSelectedListener(item -> {
            int id = item.getItemId();

            switch (id){
                case R.id.home :  {
                    getSupportFragmentManager().beginTransaction().replace(R.id.container, f1).commit();
                    return true;
                }

                case R.id.search : {
                    getSupportFragmentManager().beginTransaction().replace(R.id.container, f2).commit();
                    return true;
                }

                case R.id.details : {
                    getSupportFragmentManager().beginTransaction().replace(R.id.container, f3).commit();
                    return true;
                }
            }

            getSupportFragmentManager().beginTransaction().replace(R.id.container, f1).commit();

            return true;
        });

    }
}