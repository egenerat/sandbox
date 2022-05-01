interface Person {
  firstName: string;
  lastName: string;
}

const john: Person = {
  firstName: "John",
  lastName: "Doe",
}

//const alice: Person = {
//  firstName: "Alice",
//  age: "30",
//}

//example.ts:13:3 - error TS2322: Type '{ firstName: string; age: string; }' is not assignable to type 'Person'.
  //Object literal may only specify known properties, and 'age' does not exist in type 'Person'.

//13   age: "30",
//     ~~~~~~~~~


