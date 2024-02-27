extends Node2D

func _ready():
	pass # Replace with function body.

func _physics_process(delta):
	time_passing(gameSpeed)
	print(str(hour) + ":" + str(minute) +  " " + str(day) + "." + str(month) + "." + str(year))
	print("one year")


#Time
var gameSpeed = 1
var minute = 0
var hour = 0
var day = 0
var month = 0
var year = 0

func time_passing(speed):
	while speed < 0:
		await get_tree().create_timer(20/speed).timeout
		print("hi")
		minute += 10
		if minute >= 60:
			minute = 0
			hour += 1
			if hour >= 24:
				hour = 0
				day += 1
				if day >= 30:
					day = 0
					month += 1
					if month >= 12:
						month = 0 
						year += 1
