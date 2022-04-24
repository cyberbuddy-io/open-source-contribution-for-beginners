package com.sayam.greatingapp;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

import com.sayam.greatingapp.databinding.ActivityHomeBinding;

public class HomeActivity extends AppCompatActivity {

    ActivityHomeBinding binding;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding =  ActivityHomeBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        String occasion = binding.editText.getText().toString();
        String to = binding.editText2.getText().toString();
        String from = binding.editText3.getText().toString();
        binding.button.setOnClickListener(view1 -> {
            Intent i = new Intent(getApplicationContext(),SecondActivity.class);
            i.putExtra("occasion",occasion);
            i.putExtra("to",to);
            i.putExtra("from", from);
            startActivity(i);
        });


    }
}