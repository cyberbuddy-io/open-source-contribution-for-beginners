package com.example.weather_app_ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.List;

public class CityAdapter extends RecyclerView.Adapter<CityAdapter.ViewHolder>{

    private final List<CityModel> mlist;
    private final LayoutInflater inflater;

    public CityAdapter(Context context, List<CityModel> data){
        this.mlist = data;
        this.inflater = LayoutInflater.from(context);
    }

    @NonNull
    @Override
    public CityAdapter.ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = inflater.inflate(R.layout.cities,parent,false);
        return new CityAdapter.ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull CityAdapter.ViewHolder holder, int position) {
        CityModel cm = mlist.get(position);

        holder.temp.setText(cm.getTemp());
        holder.contry.setText(cm.getContry());
        holder.city.setText(cm.getCity());
        holder.rain.setText(cm.getRain());
        holder.wind.setText(cm.getWind());
        holder.icon.setImageResource(cm.getIcon());

    }

    @Override
    public int getItemCount() {
        return mlist.size();
    }

    public static class ViewHolder extends RecyclerView.ViewHolder {

        TextView temp,city,contry,wind,rain;
        ImageView icon;

        public ViewHolder(@NonNull View itemView) {
            super(itemView);

            temp = itemView.findViewById(R.id.temp_cities);
            city = itemView.findViewById(R.id.cityname);
            contry = itemView.findViewById(R.id.contry);
            wind = itemView.findViewById(R.id.speed);
            rain = itemView.findViewById(R.id.rain);
            icon = itemView.findViewById(R.id.outlinedIcon);
        }
    }
}
