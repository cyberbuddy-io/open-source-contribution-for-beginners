package com.sayam.news.Screens;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;

import com.sayam.news.R;
import com.squareup.picasso.Picasso;

public class NewsDetailActivity extends AppCompatActivity {

    String title, description , image,url,content;
    ImageView newsImg;
    TextView title_tv,desc_tv,content_tv;
    Button button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_news_detail);
        title = getIntent().getStringExtra("title");
        description = getIntent().getStringExtra("description");
        image = getIntent().getStringExtra("image");
        url = getIntent().getStringExtra("url");
        content = getIntent().getStringExtra("content");
        newsImg = findViewById(R.id.img);
        title_tv = findViewById(R.id.title);
        desc_tv = findViewById(R.id.desc);
        content_tv = findViewById(R.id.content);
        button = findViewById(R.id.read);
        title_tv.setText(title);
        desc_tv.setText(description);
        content_tv.setText(content);
        Picasso.get().load(image).into(newsImg);
        button.setOnClickListener(v -> {
            Intent intent = new Intent(Intent.ACTION_VIEW);
            intent.setData(Uri.parse(url));
            startActivity(intent);

        });

    }
}