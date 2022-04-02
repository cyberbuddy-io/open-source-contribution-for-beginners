from matplotlib import pyplot as plt

x = []
y = []

for i in range(100):
	x.append(i)
	y.append(i)

	# Mention x and y limits to define their range
	plt.xlim(0, 100)
	plt.ylim(0, 100)
	
	# Ploting graph
	plt.plot(x, y, color = 'green')
	plt.pause(0.01)

plt.show()
