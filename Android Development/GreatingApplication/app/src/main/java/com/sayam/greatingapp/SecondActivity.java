package com.sayam.greatingapp;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

import com.sayam.greatingapp.databinding.ActivityHomeBinding;
import com.sayam.greatingapp.databinding.ActivitySecondBinding;

public class SecondActivity extends AppCompatActivity {

    ActivitySecondBinding binding;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding =  ActivitySecondBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        Intent i = getIntent();
        String occasion = i.getStringExtra("occasion");
        String to = i.getStringExtra("to");
        String from = i.getStringExtra("from");
        binding.occ.setText(occasion);
        binding.forName.setText(from);
        binding.toNae.setText(to);

    }
}