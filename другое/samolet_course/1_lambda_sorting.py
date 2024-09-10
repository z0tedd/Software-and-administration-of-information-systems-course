def main():
    people = [
        {"name": "Ligma", "age": 30},
        {"name": "Balls", "age": 40},
        {"name": "NEGRI", "age": 25},
        {"name": "DOLBIT", "age": 60},
        {"name": "SILNO", "age": 27},
        {"name": "BABIK", "age": 5},
    ]
    np = sorted(people, key=lambda x: x["age"])
    people.sort(key=lambda x: x["age"])
    print(np)
    print(people)


if __name__ == "__main__":
    main()
    pass
