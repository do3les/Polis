extends Node2D
class_name Building

# Called when the node enters the scene tree for the first time.
func _ready():
	%TileMap.set_pattern(1, self.global_position, %TileMap.tile_set.get_pattern(0))
	%TileMap.set_pattern(2, self.global_position + Vector2(0, -2), %TileMap.tile_set.get_pattern(1))

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass
