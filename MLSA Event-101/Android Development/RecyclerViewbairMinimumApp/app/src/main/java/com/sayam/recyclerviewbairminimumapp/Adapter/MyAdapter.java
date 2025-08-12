package com.sayam.recyclerviewbairminimumapp.Adapter;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.sayam.recyclerviewbairminimumapp.Model.DataModel;
import com.sayam.recyclerviewbairminimumapp.R;

public class MyAdapter extends RecyclerView.Adapter<ViewHolder> {
    DataModel[] dataModels;
    public MyAdapter(DataModel[] dataModels) {
        this.dataModels = dataModels;
    }
    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.list_item,parent,false);
        return new ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolder holder, int position) {
        final DataModel model =dataModels[position];
        holder.courseImage.setImageResource(model.courseImage);
        holder.courseName.setText(model.courseName);
    }

    @Override
    public int getItemCount() {
        return dataModels.length;
    }
}
class ViewHolder extends RecyclerView.ViewHolder{

    public ImageView courseImage;
    public TextView courseName;
    public ViewHolder(@NonNull View itemView) {
        super(itemView);
        courseImage = itemView.findViewById(R.id.imageViewRecycler);
        courseName = itemView.findViewById(R.id.textViewRecycler);
    }
}
