
>[!def|*] Javadoc
>Javadoc processes doc comments that immediately precede a class, attribute, constructor or method declaration. There are three block tags for Javadoc that begin with the `@` symbol, they are shown below with an example of how to create a Javadoc.
>``` Java
>/**
>* Description (Summary)
>* @param (to describe parameters)
>* @return (to describe return values)
>* @throws (to describe when it must throw an exception)
>*/
>```
>
>The first sentence of the Javadoc comment will appear in the Field Summary section of the generated documentation.

>[!rmk|*] Standards
>When using Javadoc, it is expected that:
>1. Every [[Public]] field should have a Javadoc comment to describe its purpose.
>2. Methods must have `@param` (if inputs are present), `@return` (if return is present) and `@throws` (if exceptions need to be thrown). 
>3. Javadoc also has its own implementation of (in a sense) `LaTeX` that should be used when writing any variables (it is not actually `LaTeX`). To do it, write: `{@code textHere}` and it will generate a special font in the Javadoc.

Eclipse can almost do this for you automatically (at least the block parts). Simply go in `Source` and then click `Generate Element Comment`. Of course, you should add extra information as well.




