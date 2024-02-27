extends Camera2D

@export var CameraSpeed = 500
var v
# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.


func get_input():
	var input_direction = Input.get_vector("left", "right", "up", "down")
	v = input_direction * CameraSpeed

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	get_input()
	self.position += v * delta
