Ruby quickstart

```
> irb
```

String interpolation
```
name = 'Emile'
puts "Hello #{name}"
```
(Only works with double quotes)

Instantiate an object
```
MyClass.new()
```

```
MyClass.instance_methods(false)
```
`false` not to include ancestors' methods

```
.respond_to?("method_name")
```

Possible to alter a class definition. Will impact all the existing and future instances.

Getter/setter
```
attr_accessor :name
```

Conditional branches
if/elsif/else

Script
```
if __FILE__ == $0
```