# HOW TO GIT GUD

This is a little Helper on how to do certain things with Github that help improve your project management and overview.

# First Steps

## How to add a Github Remote Repository

1. Create an SSH Key
    - `ssh-keygen`
    - It gives you an option, where to save it, but usually it is found in your `~/.ssh/` \
      *(Don't forget to show hidden files in your explorer!)*
2. Add your 42 Public SSH Key (`id_rsa.pub`) to your Github
    - https://github.com/settings/keys
3. Create your Github Repository
    - *f.ex. libft, ft_printf, minishell, ...*
4. - If you already have created a Project Repository on your PC, type: \
      `git remote add <name> <github repository ssh url>`
   - If you have no Project Repository on your PC yet, type: \
      `git clone <github repository ssh url> <name>`
5. Check your Remote Repositories in your directory
    - `git remote -v`

## How to push your work to the Github Remote Respository

1. Be in your directory and add your newly added work
    - To add everything: `git add .`
    - To add only specific files: `git add <subdirectory/file>` or `git add <file>`
2. If you want to check, if everything is added or what is new, do
    - `git status`
3. To push it, you first need to commit to the added files
   - `git commit -m "<message>"`
4. Now you can push it to Github
   - `git push`

## Common Issues

1. The first time using github on your device, you will be asked for your username and email, so just type these two commands:
   - `git config --global user.email "<email address you use on github>"`
   - `git config --global user.name "<your github username"`
2. Easy way to deal with a merge conflict:
   ```
     $>git stash
     $>git pull
     $>git stash pop
   ```
   *(If it still has issues, ask a peer :D )*

# Advanced Options

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

