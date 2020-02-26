fun main() {
	val nums = readLine()!!.split(" ").map { it.toInt()}.sorted()
	val num1 = nums[3] - nums[2]
	val num2 = nums[3] - nums[1]
	val num3 = nums[3] - nums[0]
	println("${num1} ${num2} ${num3}")
}
