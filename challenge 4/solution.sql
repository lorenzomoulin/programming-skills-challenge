SELECT 
	CASE 
    	WHEN Notes.Grade < 8 THEN NULL 
    	ELSE Students.Name
    END AS Name
    , Notes.Grade, Students.Value 
FROM Students 
LEFT JOIN Notes 
	ON Students.Value >= Notes.Min_Value AND Students.Value <= Notes.Max_Value
ORDER BY Grade DESC, 
    CASE 
    	WHEN Notes.Grade >= 8 THEN Students.Name
    	ELSE Students.Value
    END
    ASC
    