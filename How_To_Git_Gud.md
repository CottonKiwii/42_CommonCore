# HOW TO GIT GUD

This is a little Helper on how to do certain things with Github that help improve your project management and overview.

## How to add a Github Remote Repository

1. Add your 42 Public SSH Key to your Github
    - https://github.com/settings/keys
2. Create your Github Repository
    - *f.ex. libft, ft_printf, minishell, ...*
3. In your already created Project Repository on your PC type:
    - `git remote add <name> <github repository ssh url>`
4. Check your Remote Repositories
    - `git remote -v`

## How to push to two Repositories with one Command

1. Create a new Remote for two Repositories
    - `git remote add <name> <first repository ssh url>`
2. Register the first Remote URL
    - `git remote set-url --add --push <name> <first repository ssh url>`
3. Register the second Remote URL
    - `git remote set-url --add --push <name> <second repository ssh url>`
4. Push your Project using the new Remote
    - `git push <name>`

## How to add Submodules to a Repository

Submodules are basically links to other Repositories in another Repository on your Github Account. They help to keep big Projects organized.

### To do this you need:
- A Main Repository
- A Sub Repository with at least Something pushed

1. Clone the Main Repository somewhere on your PC
2. Add the Submodule in the Main Repository
    - `git submodule add <sub repository ssh url>`
3. Push the changes made to the Main Repository

Now you should be able to see and click on the Submodule in your Main Repository on Github.


### *New Instructions might be added later...*

