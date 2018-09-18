# GrumpyBot

GrumpyBot gives grouchy responses to typed input.

In response to the user's first message, the bot will respond:

> Ugh. Today's a bad day.

After any other message, the user's message is examined and if it appears to contain an exclamation (i.e. it has one or more `!` in it), the bot will respond:

> Calm down, buddy.

In addition, if the user's message contains a `?` it will say:

> What do you think?!

when the user's message also has the word "how" or "why" in it, or:

> Enough with the questions!

when the user's message does not have either `how` nor `why`

In cases when the user's message does not have an `!`, `?`, nor `.` then the bot will respond:

> Didn't you learn punctuation in elementary school?

Accordingly, the bot will respond with the above rules until they just type the message `bye.` and then the program will end after the bot replies with:

> Finally, some peace.