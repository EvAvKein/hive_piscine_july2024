# Hive Helsinki - July 2024 Piscine

This repo contains all the code I wrote while participating in Hive Helsinki's selection process ("Piscine") from 24.06.2024 to 19.07.2024.

> If you're participating - or going to be - in a Piscine, it's genuinely so much better for you if you ask your fellow swimmers for help (and leave your comfort-zone/cliques if necessary!) instead of reading online solutions :)

## Workflow

- We got the instructions for each project as a PDF - listing the files we need to submit (with no extras) and the library functions we're allowed to use.
- Each attempt at a project had its own auto-created git repo, to which we had to commit and push our submission before marking it as finished.
- Once you marked an attempt as finished, you had to get it evaluated by two random peers. Scheduling an evaluation cost an evaluation point, which you gained by evaluating someone else. It's the evaluator's duty to make sure the person being evaluated is able to explain the code, make sure the code works as intended in the assignment without edgecases/bugs, and make sure the code style complies with The Norm (see next point).
- All code had to conform to the style detailed in The Norm (version 4 at the time), available in this repo as `en.norm.pdf`.
- After 2 peer evaluations, or if 24 hours passed since the project was marked as finished, the project is passed to final evaluation by an automated system which checks that the code complies with The Norm and functions as expected. This automated tests were less than perfect, so we were encouraged/told to be as strict as the PDFs during peer evaluations.

## Project categories

- `shell00` & `shell01`: A project for each of the first two days - command line exercises. We were encouraged to skip those if we didn't finish them by the 3rd day.
- `c00` through `c09`: The main focus in the Piscine - C language exercises of gradual complexity (progressing up to `c13`, but I don't know anyone who had time to even get past `c10`).
- `rush00` through `rush02`: Weekend-long group projects with 2-3 random peers - with difficulty matching the expected progress by that time, evaluations by staff and students, with the requirement for all project members to understand the code.
- `bsq`: A bonus exercise at the end of the Piscine - using everything we've had to the chance to learn so far, with a peer of our (mutual) choice

## Circumstances

- I was exceptionally eager to help/guide less experienced programmers during this Piscine, so I didn't progress on my own projects nearly as much as I otherwise could've.
- I skipped trying to pass my `shell01` due to the aforementioned recommendation, and didn't have enough time to pass my `c08` (where I was very close and knew the final error) or `c09`.
- An example of how the automated tests are less than perfect is `c05/ex06`. My attempt at efficiency caused the number 4 specifically to be accidentally counted as a prime number, but the automated tests didn't check for that number and so my code passed.
- In `rush00` I had to compromise for less modular/flexible code than I would've liked, so that we could pass the 'everyone understands the code' requirement. The code for `rush01` was provided entirely by our team lead. Our `rush02` team had a good idea but not enough experience to implement it in time. The `bsq` assignment didn't go anywhere for us since my peer and I felt it better to focus on our C projects.
