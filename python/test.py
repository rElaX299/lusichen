# todo: a system can sign up and log in
account = {"tim": "123456"}


def sign_up():
    """sign_up"""
    user_name = input("Input your user name\n")
    while user_name in account.keys():
        user_name = input("User name exists, choose another one\n")
    user_password = input("Input your password\n")
    account[user_name] = user_password

    print("sign up successfully\n")


def sign_in():
    """sign_in"""
    user_name = input("Input your user name\n")
    count = 0
    while user_name not in account.keys():
        user_name = input("User name not found, check your user name and input again\n")
        count += 1
        if count == 3:
            print("Max trying time, system break\n")
            return None

    count = 0
    user_password = input("input your password\n")
    while user_password != account[user_name]:
        user_password = input("Wrong password, input again\n")
        count += 1
        if count == 3:
            print("Max trying time, system break\n")
            return None

    print("sign in successfully")


if __name__ == "__main__":
    while True:
        cmd = int(input("Sign up = 0. Sign in = 1\n"))
        if cmd == 0:
            sign_up()
        elif cmd == 1:
            sign_in()
            break
