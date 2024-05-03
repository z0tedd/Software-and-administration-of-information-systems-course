import logging


class ArithmeticProgression:
    def __init__(self, start: int, step: int) -> None:
        self._start = start
        self._step = step

    def __call__(self) -> int:
        self._start += self._step
        return self._start - self._step


def main():
    logging.basicConfig(
        level=logging.DEBUG, format="%(asctime)s -\ %(levelname)s - %(message)s"
    )

    func = ArithmeticProgression(1, 1)
    for i in range(1, 10):
        logging.info(func())


if __name__ == "__main__":
    main()
