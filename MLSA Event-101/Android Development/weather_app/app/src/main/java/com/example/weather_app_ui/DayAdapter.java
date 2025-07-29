package com.example.weather_app_ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;
import java.util.List;

public class DayAdapter extends RecyclerView.Adapter<DayAdapter.ViewHolder> {

    private List<DayModel> mlist;
    private Context context;
    private LayoutInflater inflater;

    public DayAdapter(Context context, List<DayModel> data){
        this.mlist = data;
        this.context = context;
        this.inflater = LayoutInflater.from(context);
    }

    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = inflater.inflate(R.layout.day_weather_layout,parent,false);
        return new ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolder holder, int position) {
        DayModel dm = mlist.get(position);
        holder.time.setText(dm.getTime());
        holder.temp.setText(dm.getTemp());
        holder.img.setImageResource(dm.getImg());
    }

    @Override
    public int getItemCount() {
        return mlist.size();
    }

    protected static class ViewHolder extends RecyclerView.ViewHolder {

        TextView time,temp;
        ImageView img;

        public ViewHolder(@NonNull View itemView) {
            super(itemView);

            time = itemView.findViewById(R.id.time);
            temp = itemView.findViewById(R.id.day_temp);
            img = itemView.findViewById(R.id.icon);
        }
    }
}
