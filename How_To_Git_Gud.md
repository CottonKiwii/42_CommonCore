# HOW TO GIT GUD

This is a little Helper on how to do certain things with Github that help improve your project management and overview.

## How to add a Github Remote Repository

1. Add your 42 Public SSH Key to your Github
    - https://github.com/settings/keys
2. Create your Github Repository
    - *f.ex. libft, ft_printf, minishell, ...*
3. In your already created 42 Folder on your PC type:
    - `git remote add <name> <github repository ssh url>`
4. Check your Remote Repositories
    - `git remote -v`

## How to push to two Repositories with one Command

1. Create a new Remote for two Repositories
    - `git remote add <name> <first repository ssh url>`
2. Register the first Remote URL
    - `git remote set-url --add --push <name> <first repository ssh url>`
3. Register the second Remote URL
    - `git remote set-url --add --push <name> <second repository ssh url`
4. Push your Project using the new Remote
    - `git push <name>`

## How to add Submodules to a Repository

Submodules are links to other Repositories on your Github Account. They help to keep big Projects organized.

### To do this you need:
- A main Repository
- A sub Repository with at least something committed to it
