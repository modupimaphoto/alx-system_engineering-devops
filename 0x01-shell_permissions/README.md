su betty the script switches current user to betty
whoami -  prints the effective username of the current user
groups - prints all the groups the current user is part of
sudo chown betty hello -  changes the owner of the file hello to the user betty
chmod 774 hello - adds execute permission to the owner of the file hello
chmod 754  hello - a script that adds execute permission to the owner and the group owner, and read permission to other users, to the file hello
