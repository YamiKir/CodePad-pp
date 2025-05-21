/*

    This is a Text Editor designed for use in code development and in document creation for general form papers.

    The function of CodePad++ is to give users the flexibility to write programs in a pethora of languages, run various languages through the terminal and extension integrations, and have a customizable interface like other IDE-likes.
    For the general user, [Code]Pad++ will serve as a local machine file editor with eventual support for .doc, .pdf, .epub, etc. with functionality similar to Word 2010 and later editions. 

    Systems Supported: 
    Win, Linux, MacOS?
         (maybe Android? ios? in future revisions?)
    
    Language Written In: C++ 23 

    Feature timeline: 
    Text Buffers, Format Expression, Graphcial Interface Implementation
    (3 Days), (4 days), (1.5 weeks)
    Actualized: 
    (X Days), (X Days), (x Days)

    Structure: 

    From User Point of View, the front-end graphical interface will allow you to type whatever you desire and when a seperating character is given (space, esc,tab,enter, or any other delimting character appears) or if the cursor leaves the text area, 
    check to see if the text is valid (that is conforms to safety practices and file formats specifications) prior to writing it to the underlying buffer. IF the text is semantically fine, then grammar checking can be applied to the program 
    in order to detect things like misspelled words, missing articles, and malformed code sections. The user can do other things besides directly interacting with the text of the file such as changing filenames, formats, text formatting (center, justified, bold, strikethrough), and change properties of the enviroment
    to better serve file creation. 

    From an architecture perspective, the graphical interface will do a series of calls to preform actions. The text buffer pipeline will be: User-> Gui -> specifications checker -> Text Buffer and Grammar/Dictionaries -> GUI. 
    The File Modification pipeline will look like: User -> Gui -> File Modifier -> Text Buffer -> File Save/Updater/Opener -> File. The Graphical Interface Properties Pipeline: User -> GUI -> Changes in GUI -> GUI. 
    CodePad Extensions: User-> GUI-> add/change/remove extensions -> GUI. Codepad++ lanaguage support: User-> GUI-> Edit/View/Terminal -> Various Linking options.
    CodePad++ Terminal: GUI -> terminal, powershell, etc. -> Terminal Wrapped/ User-> GUI-> add terminal-> terminal list->Terminal Wrapper.  
    


*/
