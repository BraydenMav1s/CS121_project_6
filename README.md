# CS121_project_6

# heapOfStudents

## ULM Diagram
[![](https://mermaid.ink/img/pako:eNp9U8FugzAM_ZUop7ajP8Bh0qRq26HbpbeJS0ZcGq0kyDHTWNd_XxJCKQXKxeH5xfZ7SU48NxJ4yvOjsHajRIGizDRz345qCZrYev33yDaCYAJ-khLB2mEmZQ_MEipduBCgXfibZe0VWnoXJcwy3HAzBD_YiknzOZeCnwpyAvmCQo45UcBqXolyMUeQil5NjROEuF4sx6n1ndy3UdIVV7QYmDTHrFyS7pSLRhVAW-fVs3e0o4WjDW6cWoD1fOnQ69Nh0bduL4sOlEbTYQhJ0QyBBgT2SK-v77G8SQdRXbs2d-4W7dTxWMaDuwBAIzhX1ExwL7f3Cv1VVY_FPovllIC2VxKKJ221xG-flHNT6cwTXgKWQkn3yoKOjNMB3F3mqVtKgV8Zz7TniZrMrtE5TwlrSDiaujjwdC-O1v3VlTcyPtGOUgn9YUx5Ifl7avAtvmkfzv8Sajr5?type=png)](https://mermaid.live/edit#pako:eNp9U8FugzAM_ZUop7ajP8Bh0qRq26HbpbeJS0ZcGq0kyDHTWNd_XxJCKQXKxeH5xfZ7SU48NxJ4yvOjsHajRIGizDRz345qCZrYev33yDaCYAJ-khLB2mEmZQ_MEipduBCgXfibZe0VWnoXJcwy3HAzBD_YiknzOZeCnwpyAvmCQo45UcBqXolyMUeQil5NjROEuF4sx6n1ndy3UdIVV7QYmDTHrFyS7pSLRhVAW-fVs3e0o4WjDW6cWoD1fOnQ69Nh0bduL4sOlEbTYQhJ0QyBBgT2SK-v77G8SQdRXbs2d-4W7dTxWMaDuwBAIzhX1ExwL7f3Cv1VVY_FPovllIC2VxKKJ221xG-flHNT6cwTXgKWQkn3yoKOjNMB3F3mqVtKgV8Zz7TniZrMrtE5TwlrSDiaujjwdC-O1v3VlTcyPtGOUgn9YUx5Ifl7avAtvmkfzv8Sajr5)

# Algorithm 

### Student
- The init(studentString) function will parse the provided string.
- Convert the credit hour string into an integer and store it.
- Dynamically allocate a Date object for the student's date of birth.
- Dynamically allocate a Date object for the student's expected graduation date.
- Dynamically allocate an Address object.

### Address
- Address objects will be allocated on the heap.
- The constructor takes four string parameters: street, city, state, and zip code.
- Includes a printAddress function to display the address.

### Date
- Date objects will be allocated on the heap.
- Separate instances will be created for a student's birth date and expected graduation date.
- Each instance initializes with a date string in the format MM/DD/YYYY.
- Provides functionality to print the date in the format "Month DD, YYYY".
