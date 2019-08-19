# Student class

class Student
	attr_accessor :first_name, :last_name, :primary_phone_number

	def introduction(target)
		puts "Hi #{target}, I'm #{first_name}!"
	end

	def favorite_number
		7 # return value
	end
end

# New Student instance
andres = Student.new
# Setting it's attribute
andres.first_name = "Andres"
# Using methods
andres.introduction('Frida')
puts "Andres's favorite number is #{andres.favorite_number}."
