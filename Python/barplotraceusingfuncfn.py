from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation, writers
import numpy as np

fig = plt.figure(figsize = (7,5))
axes = fig.add_subplot(1,1,1)
axes.set_ylim(0, 300)
palette = ['blue', 'red', 'green',
		'darkorange', 'maroon', 'black']

y1, y2, y3, y4, y5, y6 = [], [], [], [], [], []

def animation_function(i):
	y1 = i
	y2 = 5 * i
	y3 = 3 * i
	y4 = 2 * i
	y5 = 6 * i
	y6 = 3 * i

	plt.xlabel("Country")
	plt.ylabel("GDP of Country")
	
	plt.bar(["India", "China", "Germany",
			"USA", "Canada", "UK"],
			[y1, y2, y3, y4, y5, y6],
			color = palette)

plt.title("Bar Chart Animation")

animation = FuncAnimation(fig, animation_function,
						interval = 50)
plt.show()
