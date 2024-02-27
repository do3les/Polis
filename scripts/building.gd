extends Node2D
class_name Building




# Called when the node enters the scene tree for the first time.
func _ready():
	var buildingPattern = load("res://assets/buildings/house0/building.tres")
	var roofPattern = load("res://assets/buildings/house0/roof.tres")
	
	%TileMap.set_pattern(1, self.position, buildingPattern)
	%TileMap.set_pattern(2, self.position + Vector2(0, -2), roofPattern)

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass
