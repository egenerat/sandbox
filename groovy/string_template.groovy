def text = '{key1:${val1}, key2:${val2}}'

def binding = ["val1": "123", "val2": "456"]

def engine = new groovy.text.SimpleTemplateEngine()
def template = engine.createTemplate(text).make(binding)
print(template.toString())